#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll t;
  cin >> t;
  map<char, ll> mcl;
  for(ll j=0; j<26; j++){
    mcl[char('A'+j)] = j;
  }
  string s;
  vector<bool> vis(26, false);
  ll trees = 0, acorns = 0;
  while(t--){
    vector<string> vs;
    vector<ll> v[26];
    while(1){
      cin >> s;
      if(s[0] == '*') break;
      vs.emplace_back(s);
    }
    cin >> s;
    for(ll i=0; i<vs.size(); i++){
      ll p = mcl[vs[i][1]], q = mcl[vs[i][3]];
      v[p].emplace_back(q);
      v[q].emplace_back(p);
    }
    vis.assign(vis.size(), false);
    for(ll i=0; i<s.length(); i+=2){
      ll j = mcl[s[i]];
      if(!vis[j]){
        if(v[j].size() == 0){
          acorns++;
        }
        else {
          trees ++;
          stack<ll> stl;
          stl.push(j);
          vis[j] = 1;
          while(!stl.empty()){
            ll tp = stl.top();
            stl.pop();
            for(auto x : v[tp]){
              if(!vis[x]){
                vis[x] = 1;
                stl.push(x);
              }
            }
          }
        }
      }
    }
    cout << "There are " << trees << " tree(s) and " << acorns << " acorn(s).\n";
    trees = acorns = 0;
  }
  return 0;
}