#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    map<char, ll> mcl;
    ll n = s.length();
    for(ll i=0; i<n; i++){
      mcl[s[i]] += 1;
    }
    map<char, ll> mc;
    ll mn = 1000000000000;
    mc['A'] = 3;
    mc['M'] = 1;
    mc['R'] = 2;
    mc['G'] = 1;
    mc['T'] = 1;
    mc['I'] = 1;
    for(auto x : mc){
      mn = min(mn, mcl[x.first]/x.second);
    }
    cout << mn << "\n";
  }
  return 0;
}