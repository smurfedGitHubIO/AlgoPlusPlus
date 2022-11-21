#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  while(1){
    ll A[5];
    ll sms = 0;
    for(ll i=0; i<5; i++){
      cin >> A[i];
      sms += A[i];
    }
    if(sms == 0){
      break;
    }
    sort(A, A+5);
    bool check = false;
    do{
      for(ll i=0; i<3; i++){
        for(ll j=0; j<3; j++){
          for(ll k=0; k<3; k++){
            for(ll m=0; m<3; m++){
              ll ans = 0;
              ans = (i == 0 ? A[0]+A[1] : (i == 1 ? A[0]-A[1] : A[0]*A[1]));
              ans = (j == 0 ? ans+A[2] : (j == 1 ? ans-A[2] : ans*A[2]));
              ans = (k == 0 ? ans+A[3] : (k == 1 ? ans-A[3] : ans*A[3]));
              ans = (m == 0 ? ans+A[4] : (m == 1 ? ans-A[4] : ans*A[4]));
              if (ans == 23) {
                check = 1;
              }
            }
          }
        }
      }
    }while(next_permutation(A, A+5));
    cout << (check ? "Possible\n" : "Impossible\n");
  }
  return 0;
}