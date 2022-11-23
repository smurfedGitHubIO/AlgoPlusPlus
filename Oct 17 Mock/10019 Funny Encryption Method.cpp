#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n;
    cin >> n;
    ll b1 = __builtin_popcount(n);
    ll hex = 0, q = 1;
    while(n > 0){
      hex += q*(n%10);
      n /= 10;
      q *= 16;
    }
    cout << b1 << " " << __builtin_popcount(hex) << "\n";
  }
  return 0;
}