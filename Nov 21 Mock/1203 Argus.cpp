#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;
typedef pair<ll, pll> pl;

int main(){
  set<pl> spl;
  while(true){
    string s;
    ll n, m;
    cin >> s;
    if(s == "#") break;
    cin >> n >> m;
    spl.insert(mp(m, mp(n, m)));
  }
  ll q;
  cin >> q;
  while(q--){
    pl qt = *spl.begin();
    cout << qt.s.f << "\n";
    spl.erase(spl.begin());
    spl.insert(mp(qt.s.s+qt.f, mp(qt.s.f, qt.s.s)));
  }
  return 0;
}