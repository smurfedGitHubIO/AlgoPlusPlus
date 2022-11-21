#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
using namespace std;

typedef long long int ll;
typedef pair<char, ll> pcl;

int main(){
  string s;
  cin >> s;
  ll n = s.length();
  vector<ll> v;
  ll cur = 0;
  char last = 'a';
  for(ll i=0; i<n; i++){
    if(i == 0){
      cur += 1;
      last = s[i];
    } else {
      if(last == s[i]){
        cur += 1;
      } else {
        if(cur > 0){
          v.emplace_back(mp(last, cur));
          last = s[i];
          cur = 0;
        }
      }
    }
  }
  ll ans = 0;
  for(ll i=0; i<v.size(); i++){
    if(v[i].f == 'v'){
      for(ll j=i+1; j<v.size(); j+=2){
        ans += v[i].s*v[i+1].s*v[i+2].s;
      }
    }
  }
  cout << ans;
  return 0;
}