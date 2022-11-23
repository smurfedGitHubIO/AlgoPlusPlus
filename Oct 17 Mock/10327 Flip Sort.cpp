#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n;
  while(scanf("%lld", &n) != EOF){
    ll A[n];
    for(ll i=0; i<n; i++){
      cin >> A[i];
    }
    ll ans = 0;
    for(ll i=0; i<n; i++){
      for(ll j=1; j<n; j++){
        if(A[j] < A[j-1]){
          swap(A[j], A[j-1]);
          ans++;
        }
      }
    }
    printf("Minimum exchange operations : %lld\n", ans);
  }
  return 0;
}