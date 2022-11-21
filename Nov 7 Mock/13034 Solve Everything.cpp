#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll tanyaLitamHeartHeart;
  cin >> tanyaLitamHeartHeart;
  for(ll j=0; j < tanyaLitamHeartHeart; j++){
    ll A[13];
    bool check = true;
    for(ll i=0; i<13; i++){
      cin >> A[i];
      check &= (A[i] > 0);
    }
    printf("Set #%d: %s", j+1, (check ? "Yes\n" : "No\n"));
  }
}