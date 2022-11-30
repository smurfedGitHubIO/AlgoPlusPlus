#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
using namespace std;

typedef long long int ll;
typedef pair<ll, double> pld;
typedef pair<ll, ll> pll;

const ll INF = 1e18 + 11;

int main(){
  ll n;
  map<char, ll> mcl;
  for(ll i=0; i<26; i++){
    mcl[char('A' + i)] = i;
  }
  while(scanf("%lld", &n) != EOF){
    char c;
    double d;
    string s;
    vector<ll> v[27];
    vector<double> val(26, -1);
    while(n--){
      cin >> c >> d >> s;
      ll p = mcl[c];
      for(ll i=0; i<(ll)s.length(); i++){
        if(s[i] == '*'){
          v[p].emplace_back(26);
          v[26].emplace_back(p);
        } else {
          v[p].emplace_back(mcl[s[i]]);
          v[mcl[s[i]]].emplace_back(p);
        }
        val[p] = d;
      }
    }
    ll ind = -1;
    double mn = -1;
    vector<ll> dist(26, -1);
    for(ll i=0; i<26; i++){
      queue<pld> q;
      q.push(mp(i, val[i]));
      vector<bool> vis(26, false);
      vis[i] = 1;
      while(!q.empty()){
        pld tp = q.front();
        if(tp.f == 26){
          if(mn < tp.s){
            mn = tp.s;
            ind = i;
          }
          break;
        }
        q.pop();
        for(auto x : v[tp.f]){
          if(!vis[x]){
            vis[x] = 1;
            q.push(mp(x, tp.s*0.95));
          }
        }
      }
    }
    cout << "Import from " << char('A'+ind) << "\n";
  }
  return 0;
}