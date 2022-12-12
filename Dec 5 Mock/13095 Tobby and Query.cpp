// #include <bits/stdc++.h>
// using namespace std;

// typedef long long int ll;

// int main(){
//   ll n;
//   while(scanf("%lld", &n) != EOF){
//     ll A[n];
//     for(ll i=0; i<n; i++){
//       cin >> A[i];
//     }
//     ll dp[n+1][10];
//     for(ll i=0; i<=n; i++){
//       for(ll j=0; j<10; j++){
//         dp[i][j] = 0;
//       }
//     }
//     for(ll i=1; i<=n; i++){
//       if(i == 1){
//         dp[i][A[i-1]] = 1;
//       } else {
//         for(ll j=0; j<10; j++){
//           if(j != A[i-1]){
//             dp[i][j] = dp[i-1][j];
//           } else {
//             dp[i][j] = dp[i-1][j]+1;
//           }
//         }
        
//       }
//     }
//     ll q;
//     cin >> q;
//     while(q--){
//       ll x, y;
//       cin >> x >> y;
//       ll ans = 0;
//       for(ll i=0; i<10; i++){
//         // cout << dp[y][i] << " " << dp[x-1][i] << " " << i << "\n";
//         if(dp[y][i] - dp[x-1][i] > 0){
//           ans ++;
//         }
//       }
//       cout << ans << "\n";
//     }
//   }
//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n;
  while(scanf("%lld", &n) != EOF){
    ll A[n];
    ll prefsum[n+1];
    prefsum[0] = 0;
    map<ll, ll> mpl;
    for(ll i=1; i<=n; i++){
      cin >> A[i-1];
      if(i == 1){
        prefsum[i] = 1;
        mpl[A[i-1]] = 1;
      } else {
        mpl[A[i-1]] += 1;
        if(mpl[A[i]] == 1){
          prefsum[i] = prefsum[i-1] + 1;
        } else {
          prefsum[i] = prefsum[i-1];
        }
      }
    }
    ll q;
    cin >> q;
    while(q--){
      ll x, y;
      cin >> x >> y;
      --x, --y;
      cout << prefsum[y] - prefsum[x-1] << "\n";
    }
  }
  return 0;
}