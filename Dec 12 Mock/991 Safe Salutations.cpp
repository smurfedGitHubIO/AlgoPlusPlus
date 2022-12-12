#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll A[15];
  A[0] = 0;
  A[1] = 1;
  for(ll i=2; i<=15; i++){
    A[i] = 0;
    for(ll j=1; j<2*i; j+=2){
      A[i] += max(A[(2*i-j-1)/2],1LL)*max(A[(j-1)/2],1LL);
    }
  }
  ll n, q=0;
  while(scanf("%lld", &n) != EOF){
    if(q++ != 0){
      printf("\n");
    }
    printf("%lld\n", A[n]);
  }
  return 0;
}