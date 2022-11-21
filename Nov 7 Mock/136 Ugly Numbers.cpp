#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll MAXN = 1e5 + 11;

int main(){
  vector<ll> ans;
  ans.emplace_back(1);
  queue<ll> q;
  q.push(1);
  map<ll, bool> mlb;
  ll b[] = {2,3,5};
  while(ans.size() <= 20000) {
    ll fr = q.front();
    q.pop();
    for(ll i=0; i<3; i++){
      if(mlb[fr*b[i]] == 0){
        mlb[fr*b[i]] = 1;
        q.push(fr*b[i]);
        ans.emplace_back(fr*b[i]);
      }
    }
  }
  sort(begin(ans), end(ans));
  ll cnt = 0;
  for(ll i=0; i<5000; i++){
    if(ans[i] > 0){
      cnt += 1;
      if(cnt == 1500){
        printf("The 1500'th ugly number is %lld.\n", ans[i]);
        break;
      }
    }
  }
  return 0;
}