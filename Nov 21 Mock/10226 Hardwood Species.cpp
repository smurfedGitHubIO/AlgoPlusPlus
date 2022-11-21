#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll t;
  cin >> t;
  vector<string> vs[t];
  for(ll i=0; i<t; i++){
    if(i == 0){
      string s;
      ll cnt = 0;
      ll q = 0;
      while(getline(cin, s)){
        if(s[0] == '\0'){
          if(q++ <= 1){
            continue;
          } else {
            break;
          }
        } else {
          ll n = s.length();
          if(s[n-1] == '\n')
            s[n-1] = '\0';
          vs[i].emplace_back(s);
        }
      }
    } else {
      char s[5000];
      map<string, double> msl;
      ll cnt = 0;
      while(fgets(s, 5000, stdin)){
        if(s[0] == '\n' or s[0] == '\0'){
          break;
        } else {
          ll n = strlen(s);
          if(s[n-1] == '\n')
            s[n-1] = '\0';
          vs[i].emplace_back(s);
        }
      }
    }
  }
  for(ll i=0; i<t; i++){
    map<string, ll> msl;
    for(ll j=0; j<(ll)vs[i].size(); j++){
      msl[vs[i][j]] += 1;
    }
    for(auto x : msl){
      double sz = vs[i].size();
      double pt = (x.second*100.00)/sz;
      cout << fixed << setprecision(4) << x.first << " " << pt << '\n';
    }
    if(i != t-1)
      cout << "\n";
  }
  return 0;
}