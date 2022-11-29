#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll INF = 1e18 + 11;

int main(){
  ll n;
  while(1){
    cin >> n;
    if(n == 0) break;
    ll q;
    ll v[101][101];
    for(ll i=0; i<101; i++){
      for(ll j=0; j<101; j++){
        v[i][j] = INF;
      }
    }
    while(1){
      cin >> q;
      if(q == 0) break;
      ll p;
      while(1){
        cin >> p;
        if(p == 0) break;
        v[q][p] = 1;
      }
    }
    for(ll k=1; k<=n; k++){
      for(ll i=1; i<=n; i++){
        for(ll j=1; j<=n; j++){
          v[i][j] = min(v[i][j], v[i][k] + v[k][j]);
        }
      }
    }
    cin >> q;
    while(q--){
      ll p;
      cin >> p;
      vector<ll> vs;
      for(ll i=1; i<=n; i++){
        if(v[p][i] == INF){
          vs.emplace_back(i);
        }
      }
      cout << vs.size();
      for(ll i=0; i<vs.size(); i++) {
        if(i == 0){
          cout << " ";
        }
        cout << vs[i];
        if(i != vs.size()-1){
          cout << " ";
        }
      }
      cout << "\n";
    }
  }
  return 0;
}