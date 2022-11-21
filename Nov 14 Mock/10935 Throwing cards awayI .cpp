#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n;
  while(1){
    scanf("%lld", &n);
    if(n == 0) break;
    queue<ll> ql;
    vector<ll> dis;
    ll ans = (n*(n+1))/2;
    for(ll i=1; i<=n; i++){
      ql.push(i);
    }
    while(ql.size() > 1){
      ll fr = ql.front();
      ql.pop();
      dis.emplace_back(fr);
      fr = ql.front();
      ql.pop();
      ql.push(fr);
    }
    printf("Discarded cards:");
    ll qt = 0;
    for(ll i=0; i<n-1; i++){
      if(i == 0){
        printf(" ");
      }
      printf("%lld", dis[i]);
      if(i < n-2){
        printf(", ");
      }
      qt += dis[i];
    }
    printf("\nRemaining card: %lld\n", ans-qt);
  }
  return 0;
}