#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll conv(string s){
  ll ans = 0;
  ll q = 1;
  for(ll i=s.length()-1; i>=0 ;i--){
    ans += (s[i]-'0')*q;
    q *= 2;
  }
  return ans;
}

int main(){
  ll n;
  cin >> n;
  string ans[] = {"All you need is love!", "Love is not all you need!"};
  for(ll i=1; i<=n; i++){
    string s;
    cin >> s;
    cout << s << "\n";
    ll first = conv(s);
    cin >> s;
    cout << s << "\n";
    ll second = conv(s);
    cout << first << " " << second << "\n";
    ll wah = 0;
    if(__gcd(first, second) == 1) {
      wah = 1;
    }
    cout << "Pair #" << i << ": ";
    cout << ans[wah] << "\n";
  }
  return 0;
}