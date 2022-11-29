#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll t;
  cin >> t;
  char s[5000];
  vector<string> vs[t];
  map<char, ll> mcl;
  for(ll j=0; j<26; j++){
    mcl[char('A'+j)] = j;
  }
  ll cur = -1;
  while(fgets(s, 5000, stdin)){
    ll nt = strlen(s);
    char sc[5000];
    for(ll i=0; i<nt; i++) sc[i] = s[i];
    if(s[nt-1] == '\n'){
      s[nt-1] = '\0';
    }
    if(nt != 1){
      if(nt == 2 and sc[nt-1] == '\n'){
        cur++;
      }
      vs[cur].emplace_back(s);
    }
  }
  for(ll i=0; i<t; i++){
    ll n = mcl[vs[i][0][0]]+1;
    vector<ll> v[n+1];
    for(ll j=1; j<vs[i].size(); j++){
      ll p = mcl[vs[i][j][0]], q = mcl[vs[i][j][1]];
      v[p].emplace_back(q);
      v[q].emplace_back(p);
    }
    vector<bool> vis(n+1, false);
    ll ans = 0;
    for(ll k=0; k<n; k++){
      if(!vis[k]){
        ans++;
        stack<ll> stl;
        stl.push(k);
        vis[k] = 1;
        while(!stl.empty()){
          ll tp = stl.top();
          stl.pop();
          for(ll j=0; j<v[tp].size(); j++){
            if(!vis[v[tp][j]]){
              vis[v[tp][j]] = 1;
              stl.push(v[tp][j]);
            }
          }
        }
      }
    }
    cout << ans << "\n";
    if(i != t-1){
      cout << "\n";
    }
  }
  return 0;
}