#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;
const ll MAXN = 1e5 + 11;

int main(){
  ll n;
  ll case_ = 1;
  while(1){
    cin >> n;
    if(n == 0) {
      break;
    }
    ll cur = 1;
    map<ll, ll> mpl;
    vector<ll> v[MAXN];
    ll x, y;
    while(n --){
      cin >> x >> y;
      if(mpl[x] == 0){
        mpl[x] = cur++;
      }
      if(mpl[y] == 0){
        mpl[y] = cur++;
      }
      v[mpl[x]].emplace_back(mpl[y]);
      v[mpl[y]].emplace_back(mpl[x]);
    }
    while(1){
      cin >> x >> y;
      if(!x and !y){
        break;
      }
      ll visited = 1;
      queue<pll> qp;
      qp.push(mp(mpl[x], 0));
      vector<bool> vis(cur, false);
      vis[mpl[x]] = 1;
      while(!qp.empty()){
        pll fr = qp.front();
        qp.pop();
        for(auto x : v[fr.f]){
          if(!vis[x] and fr.s+1 <= y){
            vis[x] = 1;
            visited++;
            qp.push(mp(x, fr.s+1));
          }
        }
      }
      if(mpl[x] == 0){
        printf("Case %lld: %lld nodes not reachable from node %lld with TTL = %lld.\n", case_++, cur-visited, x, y);
      } else {
        printf("Case %lld: %lld nodes not reachable from node %lld with TTL = %lld.\n", case_++, cur-visited-1, x, y);
      }
    }
  }
  return 0;
}