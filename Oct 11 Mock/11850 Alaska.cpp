#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  while(1){
    ll x;
    cin >> x;
    if (x == 0) break;
    ll A[x];
    bool check = true;
    for(ll i=0; i<x; i++){
      cin >> A[i];
    }
    sort(A, A+x);
    for(ll i=1; i<x; i++){
      if(abs(A[i]-A[i-1]) > 200){
        check = false;
      } else if (i == x-1 and abs(A[i] - 1422) > 200) {
        check = false;
      }
    }
    if(2*abs(A[x-1]-1422) > 200){
      check = false;
    }
    cout << (check ? "POSSIBLE\n" : "IMPOSSIBLE\n");
  }
  return 0;
}