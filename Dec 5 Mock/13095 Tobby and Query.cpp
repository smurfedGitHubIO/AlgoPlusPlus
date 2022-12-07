#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n;
  while(scanf("%lld", &n) != EOF){
    ll A[n];
    for(ll i=0; i<n; i++){
      cin >> A[i];
    }
    ll dp[n+1][10];
    for(ll i=0; i<=n; i++){
      for(ll j=0; j<10; j++){
        dp[i][j] = 0;
      }
    }
    for(ll i=1; i<=n; i++){
      if(i == 1){
        dp[i][A[i-1]] = 1;
      } else {
        for(ll j=0; j<10; j++){
          if(j != A[i-1]){
            dp[i][j] = dp[i-1][j];
          } else {
            dp[i][j] = dp[i-1][j]+1;
          }
        }
        
      }
    }
    ll q;
    cin >> q;
    while(q--){
      ll x, y;
      cin >> x >> y;
      ll ans = 0;
      for(ll i=0; i<10; i++){
        // cout << dp[y][i] << " " << dp[x-1][i] << " " << i << "\n";
        if(dp[y][i] - dp[x-1][i] > 0){
          ans ++;
        }
      }
      cout << ans << "\n";
    }
  }
  return 0;
}