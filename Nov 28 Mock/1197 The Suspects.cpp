#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll MAXN = 3e4 + 11;

ll par[MAXN];
vector<ll> sz(MAXN, 1);

void init(){
  for(ll i=0; i<MAXN; i++){
    sz[i] = 1;
    par[i] = i;
  }
}

ll find(ll x){
  if(x != par[x])
    x = find(par[x]);
  return x;
}

void _union(ll a, ll b){
  ll para = find(a), parb = find(b);
  if(para != parb){
    if(sz[para] < sz[parb]){
      par[para] = parb;
      sz[parb] += sz[para];
    } else {
      par[parb] = para;
      sz[para] += sz[parb];
    }
  }
}

int main(){
  ll n,m;
  while(1){
    init();
    cin >> n >> m;
    if(!n and !m) break;
    ll ans = 0;
    while(m --){
      ll k, x, y;
      cin >> k;
      if(k != 0){
        cin >> x;
      }
      --k;
      while(k--){
        cin >> y;
        _union(x, y);
      }
    }
    for(ll i=0; i<=n; i++){
      if(find(i) == find(0)){
        ans++;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}