#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll A[5];
  ll B[5];
  while(scanf("%lld %lld %lld %lld %lld", &A[0], &A[1], &A[2], &A[3], &A[4]) != EOF){
    for(ll i=0; i<5; i++){
      scanf("%lld", &B[i]);
    }
    bool check = true;
    for(ll i=0; i<5; i++){
      if(B[i] + A[i] != 1){
        check = false;
      }
    }
    printf("%s\n", (check ? "Y" : "N"));
  }
  return 0;
}