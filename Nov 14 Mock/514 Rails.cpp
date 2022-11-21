#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n;
  while(1){
    cin >> n;
    if(n == 0) break;
    ll A[n];
    bool last = false;
    while(!last){
      cin >> A[0];
      if(A[0] == 0) break;
      for(ll i=1; i<n; i++){
        cin >> A[i];
      }
      bool ans = true;
      stack<ll> stl;
      ll ind = 1;
      for(ll i=0; i<n; i++){
        if(stl.size() > 0 and stl.top() == A[i]){
          stl.pop();
        } else if(ind == A[i]) {
          ind += 1;
        } else if(ind <= n){
          if (A[i] < ind) {
            ans = false;
          }
          while(ind != A[i] and ind <= n){
            stl.push(ind);
            ind+=1;
          }
          if(ind == A[i])
            ind += 1;
        } else {
          ll tp = stl.top();
          // cout << tp << " " << A[i] << "\n";
          stl.pop();
          if(tp != A[i]){
            ans = false;
          }
        }
      }
      cout << (ans ? "Yes\n": "No\n");
    }
    cout << "\n";
  }
  return 0;
}