#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n, m;
  while(scanf("%lld %lld", &n, &m) != EOF){
    vector<ll> ans;
    ll x = n/m;
    ans.emplace_back(x);
    ll pt = 0;
    n = n%m;
    while(min(n,m) >= 1){
      if(pt++ == 15) break;
      x = min(n, m);
      n = max(n, m);
      m = x;
      x = n/m;
      ans.emplace_back(x);
      n = n%m;
    }
    if(n != 0)
      ans.emplace_back(m);
    for(ll i=0; i<ans.size(); i++){
      if(i == 0){
        cout << "[" << ans[i];
      } else {
        if(i == 1){
          cout << ";";
        }
        cout << ans[i];
        if(i != ans.size()-1){
          cout << ",";
        }
      }
    }
    cout << "]\n";
  }
  return 0;
}