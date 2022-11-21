#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

bool check(string s, ll e){
  for(ll i=e; i<s.length(); i+=e){
    for(ll j=0; j<e; j++){
      if(s[i+j] != s[j]){
        return false;
      }
    }
  }
  return true;
}

int main(){
  ll t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    ll ans = -1;
    vector<ll> past;
    for(ll i=1; i<=s.length()/2; i++){
      if(s.length()%i == 0){
        if(check(s, i)){
          bool wah = true;
          for(ll j=0; j<past.size(); j++){
            if(i%past[j] == 0){
              wah = false;
              break;
            }
          }
          if(wah){
            ans = i;
          }
          past.emplace_back(i);
        }
      }
    }
    cout << (ans == -1 ? s.length() : ans) << "\n";
    if(t-1 >= 0){
        cout << "\n";
    }
  }
  return 0;
}