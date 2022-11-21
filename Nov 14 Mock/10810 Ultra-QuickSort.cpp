#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
using namespace std;
using namespace __gnu_pbds;

typedef long long int ll;

typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int main(){
  ll n;
  while(1){
    scanf("%lld", &n);
    ordered_set os;
    if(!n) break;
    ll A[n];
    ll ans = 0;
    for(ll i=0; i<n; i++){
      scanf("%lld", &A[i]);
      if (i != 0) {
        ll p = os.order_of_key(A[i]);
        ans += i-p;
      }
      os.insert(A[i]);
    }
    printf("%lld\n", ans);
  }
  return 0;
}