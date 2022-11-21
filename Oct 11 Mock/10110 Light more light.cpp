#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  while(1){
    ll x;
    cin >> x;
    if(x == 0){
      break;
    }
    ll q = sqrt(x);
    if(q*q == x){
      cout << "yes\n";
    } else {
      cout << "no\n";
    }
  }
  return 0;
}