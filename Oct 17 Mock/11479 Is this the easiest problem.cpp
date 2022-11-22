#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll t;
  cin >> t;
  for(ll i=1; i<=t; i++){
    cout << "Case " << i << ": ";
    ll a,b,c;
    cin >> a >> b >> c;
    if(a+b <= c or a+c <= b or b+c <= a){
      cout << "Invalid\n";
    } else if(a == b and b == c) {
      cout << "Equilateral\n";
    } else if(a == b or b == c or a == c) {
      cout << "Isosceles\n";
    } else {
      cout << "Scalene\n";
    }
  }
  return 0;
}