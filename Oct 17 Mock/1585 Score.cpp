#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    ll cur = 1, ans = 0;
    for(ll i=0; i<s.length(); i++){
      if(s[i] == 'O'){
        ans += cur++;
      } else {
        cur = 1;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}