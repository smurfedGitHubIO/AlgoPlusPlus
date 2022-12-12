#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n;
  cin >> n;
  while(1){
    char s[5000];
    vector<string> vs;
    ll cur = 0;
    while(1){
      fgets(s, 5000, stdin);
      ll slen = strlen(s);
      if(s[slen-1] == '\n'){
        s[slen-1] = '\0';
        slen --;
      }
      if(slen <= 2){
        for(ll i=0; i<slen; i++){
          cur = cur*10 + (s[i]-'0');
        }
        break;
      }
      vs.emplace_back(s);
    }
    ll A[vs.size()][n];
    for(ll i=0; i<vs.size(); i++){
      ll q = 0, ind = 0;
      for(ll j=0; j<vs[i].length(); j++){
        if(j == ' '){
          A[i][ind++] = q;
          q = 0;
        } else {
          q = q*10 + (vs[i][j] - '0');
        }
      }
      A[i][ind] = q;
    }
    
    n = cur;
  }
  return 0;
}