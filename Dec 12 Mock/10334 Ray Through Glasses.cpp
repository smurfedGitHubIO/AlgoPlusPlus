#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll A[1100];
  A[0] = 1;
  A[1] = 2;
  for(ll i=2; i<n; i++){
    A[i] = A[i-1] + A[i-2];
  }
  ll n;
  while(scanf("%lld", &n) != EOF){
    cout << A[n] << "\n";
  }
  return 0;
}