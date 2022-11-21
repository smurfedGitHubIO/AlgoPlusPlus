#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll x;
  string ans[] = {"You win.\n", "You chickened out.\n", "You lose.\n"};
  while(1){
    ll wah = 1;
    cin >> x;
    if(x == -1){
      break;
    }
    map<char, ll> mci;
    string s, t;
    cin >> s >> t;
    ll sl = s.length(), tl = t.length();
    ll cnt1 = 0;
    for(ll i=0; i<sl; i++){
      cnt1 += (mci[s[i]] == 0);
      mci[s[i]] = 1;
    }
    int tries = 0;
    for(ll i=0; i<tl; i++){
      if(mci[t[i]] == 0){
        mci[t[i]] = -1;
        tries += 1;
        if(tries == 7){
          wah = 2;
          break;
        }
      } else if(mci[t[i]] == 1) {
        mci[t[i]] = -1;
        cnt1--;
        if(cnt1 == 0){
          wah = 0;
          break;
        }
      } else {
        mci[t[i]] = -1;
      }
    }
    cout << "Round " << x << "\n";
    cout << ans[wah];
  }
  return 0;
}