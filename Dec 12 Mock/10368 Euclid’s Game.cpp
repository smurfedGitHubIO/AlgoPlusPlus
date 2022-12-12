#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll check = 0;

ll solve(ll a, ll b){
  if(b-a == 0){
    return a;
  }
  check += 1;
  return solve(a, b%a);
}

int main(){
  ll x, y;
  while(1){
    cin >> x >> y;
    if(!x and !y) break;
    ll q = solve(x, y);
    cout << (check&1 ? "Stan wins\n" : "Ollie wins\n");
    check = 0;
  }
  return 0;
}