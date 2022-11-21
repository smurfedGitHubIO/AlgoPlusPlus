#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  char s[5000];
  map<char, char> mcl;
  mcl['B']= mcl['F'] = mcl['P']= mcl['V'] = '1';
  mcl['C'] = mcl['G'] = mcl['J'] = mcl['K'] = mcl['Q'] = mcl['S'] = mcl['X'] = mcl['Z'] = '2';
  mcl['D'] = mcl['T'] = '3';
  mcl['L'] = '4';
  mcl['M'] = mcl['N'] = '5';
  mcl['R'] = '6';
  mcl['A'] = mcl['E'] = mcl['I'] = mcl['O'] = mcl['U'] = mcl['H'] = mcl['W'] = mcl['Y'] = '0';
  while(scanf("%[^\n]%*c", s) != EOF){
    string ans = "";
    ll n = strlen(s);
    for(ll i=0; i<n; i++){
      // cout << ans << " " << s[i] << "\n";
      if(ans[0] == '\0'){
        if(mcl[s[i]] != '0'){
          ans += mcl[s[i]];
        }
      } else if(i > 0 and mcl[s[i]] != mcl[s[i-1]]) {
        if(mcl[s[i]] != '0'){
          ans += mcl[s[i]];
        }
      }
    }
    cout << ans << "\n";
  }
  return 0;
}