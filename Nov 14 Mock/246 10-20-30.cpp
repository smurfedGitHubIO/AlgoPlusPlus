#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll A[52];
  while(1){
    queue<ll> s;
    ll board[7][52];
    vector<bool> available(7, true);
    ll curind = 0;
    scanf("%lld", &A[0]);
    s.push(A[0]);
    if(!A[0]) break;
    for(ll i=1; i<52; i++){
      scanf("%lld", &A[i]);
      s.push(A[i]);
    }
    while(!s.empty()){
      
    }
  }
  return 0;
}