#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll A[26] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
  while(1){
    ll n;
    cin >> n;
    if(!n) break;
    map<ll, ll> mpl;
    for(ll i=2; i<=n; i++){
      ll q = i;
      for(ll j=0; j<26; j++){
        while(q%A[j] == 0){
          mpl[A[j]] += 1;
          q /= A[j];
        }
      }
    }
    cout << (n < 10 ? "  " : (n != 100 ? " " : "")) << n << " =";
    ll cnt = 0;
    for(ll i=0; i<26; i++){
      if(mpl[A[i]] == 0){
        break;
      } else {
        if (mpl[A[i]] < 10) {
          cout << " ";
        }
        cout << mpl[A[i]] << " ";
        cnt++;
      }
      if(cnt%10 == 0){
        cout << "\n";
      }
    }
  }
}