#include <bits/stdc++.h>
using namespace std;

int main(){
  ll t;
  cin >> t;
  while(t--){
    char s[5000];
    map<string, ll> msl;
    ll cnt = 0;
    while(scanf("%[^\n]%*c", s)){
      if(s == "") break;
      msl[s] += 1;
      cnt += 1;
    }
    for(auto x : msl){
      float pt = (x.second*100)/cnt;
      cout << fixed << setprecision(5) << x.first << " " << pt << "\n";
    }
  }
  return 0;
}