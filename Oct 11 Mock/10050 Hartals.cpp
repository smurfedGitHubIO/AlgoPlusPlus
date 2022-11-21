#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n;
  cin >> n;
  while(n--){
    ll m;
    cin >> m;
    ll x;
    cin >> x;
    ll A[x];
    for(ll i=0; i<x; i++){
      cin >> A[i];
    }
    sort(A, A+x);
    ll ans = 0;
    for(ll i=1; i<=m; i++){
      if(i == 6 or (i-6)%7 == 0 or i%7 == 0){
        // cout << i << " ";
        continue;
      } else {
        for(ll j=0; j<x; j++){
          if(i%A[j] == 0){
            // /cout << i << " " << A[j] << "\n";
            ans ++;
            break;
          } else if (A[j] > i){
            break;
          }
        }
      }
    }
    cout << ans << "\n";
  }
  return 0;
}