#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n, m;
  ll cur = 1;
  while(1){
    cin >> n >> m;
    if(n == 0 and n == m) break;
    vector<ll> v[n];
    for(ll i=0; i<m; i++){
      ll x,y;
      cin >> x >> y;
      --x, --y;
      v[x].emplace_back(y);
      v[y].emplace_back(x);
    }
    ll ans = 0;
    vector<bool> vis(n, false);
    for(ll i=0; i<n; i++){
      if(!vis[i]){
        ans ++;
        stack<ll> stl;
        stl.push(i);
        while(!stl.empty()){
          ll tp = stl.top();
          stl.pop();
          for(auto x : v[tp]){
            if(!vis[x]){
              vis[x] = 1;
              stl.push(x);
            }
          }
        }
      }
    }
    cout << "Case " << cur++ << ": ";
    cout << ans << "\n";
  }
  return 0;
}