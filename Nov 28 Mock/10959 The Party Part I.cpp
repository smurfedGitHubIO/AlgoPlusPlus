#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;

int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n, m;
    cin >> n >> m;
    vector<ll> v[n+1];
    vector<ll> dist(n+1, 0);
    for(ll i=0; i<m; i++){
      ll x, y;
      cin >> x >> y;
      v[x].emplace_back(y);
      v[y].emplace_back(x);
    }
    queue<pll> qpl;
    qpl.push(mp(0, 0));
    vector<bool> vis(n+1, false);
    vis[0] = 1;
    while(!qpl.empty()){
      pll fr  = qpl.front();
      qpl.pop();
      for(auto x : v[fr.f]){
        if(!vis[x]){
          vis[x] = 1;
          dist[x] = fr.s+1;
          qpl.push(mp(x, fr.s+1));
        }
      }
    }
    for(ll i=1; i<n; i++){
      cout << dist[i] << "\n";
    }
    if(t != 0)
      cout << "\n";
  }
  return 0;
}