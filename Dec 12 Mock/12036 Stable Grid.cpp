#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll t;
  cin >> t;
  for(ll i=1; i<=t; i++){
    ll n;
    cin >> n;
    map<ll, ll> mpl;
    bool check = false;
    for(ll i=0; i<n; i++){
      for(ll j=0; j<n; j++){
        ll x;
        cin >> x;
        mpl[x] += 1;
        if(mpl[x] > n){
          check = true;
        }
      }
    }
    cout << "Case " << i << ": " << (check ? "no\n" : "yes\n");
  }
}