#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n, m;
  while(1){
    cin >> n >> m;
    if(n == 0 and m == 0) break;
    map<ll, ll> A;
    ll x, ans = 0;
    for(ll i=0; i<n; i++){
      cin >> x;
      A[x] += 1;
    }
    for(ll i=0; i<m; i++){
      cin >> x;
      if(A[x] > 0){
        A[x] -= 1;
        ans += 1;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}