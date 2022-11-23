#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n;
  ll A[60];
  A[0] = A[1] = 1;
  for(ll i=2; i<60; i++){
    A[i] = A[i-1] + A[i-2];
  }
  while(1){
    cin >> n;
    if(!n) break;
    cout << A[n] << "\n";
  }
  return 0;
}