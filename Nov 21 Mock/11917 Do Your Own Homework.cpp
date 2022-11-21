#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll t;
  cin >> t;
  ll k =0 ;
  while(t--){
    cout << "Case " << ++k << ": ";
    ll n;
    cin >> n;
    map<string, ll> msl;
    for(ll i=0; i<n; i++){
      string s;
      ll x;
      cin >> s >> x;
      msl[s] = x;
    }
    ll q;
    cin >> q >> s;
    if(msl[s] <= q and msl[s] != 0){
      cout << "Yesss\n";
    } else if(msl[s] > q and msl[s] <= q+5) {
      cout << "Late\n";
    } else {
      cout << "Do your own homework!\n";
    }
  }
  return 0;
}