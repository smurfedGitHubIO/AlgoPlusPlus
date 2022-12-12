#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll A[50];
  A[1] = 1;
  A[2] = 5;
  for(ll i=3; i<50; i++){
    A[i] = (A[2]*(i/2)+A[1]*(i%2))*i;
  }
  ll t;
  cin >> t;
  while(t--){
    ll n;
    cin >> n;
    cout << A[n] << "\n";
  }
  return 0;
}