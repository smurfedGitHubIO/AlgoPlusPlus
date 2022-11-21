#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll tanyaLitamHeartHeart;
  cin >> tanyaLitamHeartHeart;
  while(tanyaLitamHeartHeart --){
    ll x;
    cin >> x;
    ll qt = sqrt(x*2);
    if ((qt*(qt+1))/2 <= x) {
      cout << qt << "\n";
    } else {
      cout << qt-1 << "\n";
    }
  }
  return 0;
}