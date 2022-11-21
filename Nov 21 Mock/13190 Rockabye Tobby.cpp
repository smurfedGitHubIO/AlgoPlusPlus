#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;
typedef pair<pll, pll> pl;

int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n, q;
    cin >> n >> q;
    string s;
    ll x;
    set<pl> spl;
    for(ll i=0; i<n; i++){
      cin >> s >> x;
      spl.insert(mp(mp(x, i), mp(s, x)));
    }
    while(q--){
      pl pt = *spl.begin();
      spl.erase(spl.begin());
      cout << pt.f.f << " " << pt.s.f << "\n";
      spl.insert(mp(mp(pt.f.f+pt.s.s), mp(pt.s.f, pt.s.s)));
    }
  }
  return 0;
}