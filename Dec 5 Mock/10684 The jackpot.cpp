#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n;
  while(1){
    cin >> n;
    if(!n) break;
    ll A[n];
    for(ll i=0; i<n; i++){
      cin >> A[i];
    }
    ll mx = 0;
    ll  cur = 0;
    for(ll i=0; i<n; i++){
      ll x = A[i];
      if(cur + x >= 0){
        cur += x;
      } else {
        cur = 0;
      }
      mx = max(mx, cur);
    }
    if(mx == 0){
      cout << "Losing streak.\n";
    } else {
      cout << "The maximum winning streak is " << mx << ".\n";
    }
  }
}