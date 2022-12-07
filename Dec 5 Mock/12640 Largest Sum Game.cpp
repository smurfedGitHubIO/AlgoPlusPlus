#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
char s[1000000];

int main(){
  while(fgets(s, 1000000, stdin)){
    vector<ll> v;
    ll slen = strlen(s);
    if(s[slen-1] == '\n'){
      s[slen-1] = '\0';
      slen--;
    }
    ll cur = 0, neg = 0;
    for(ll i=0; i<slen; i++){
      if(s[i] != ' '){
        if(s[i] == '-'){
          neg = 1;
        } else {
          cur = cur*10 + (s[i]-'0');
        }
      } else {
        v.emplace_back(cur*(neg ? -1 : 1));
        cur = 0;
        neg = 0;
      }
    }
    v.emplace_back(cur*(neg ? -1 : 1));
    ll mx = 0;
    cur = 0;
    for(auto x : v){
      // cout << x << "\n";
      if(cur + x >= 0){
        cur += x;
      } else {
        cur = 0;
      }
      mx = max(mx, cur);
    }
    cout << mx << "\n";
  }
}