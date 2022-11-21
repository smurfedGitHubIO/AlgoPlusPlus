#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n;
  scanf("%lld", &n);
  string s;
  for(ll j=0; j<=n; j++){
    getline(cin, s);
    if(j == 0) continue;
    stack<char> st;
    bool check = true;
    ll x = s.length();
    for(ll i=0; i<x; i++){
      if(s[i] == '(' or s[i] == '['){
        st.push(s[i]);
      } else {
        if(st.size() == 0){
          check = false;
          continue;
        }
        char tp = st.top();
        st.pop();
        if(tp == '(' and s[i] != ')'){
          check = false;
        } else if(tp == '[' and s[i] == ')'){
          check = false;
        }
      }
    }
    printf("%s",(check and st.size() == 0 ? "Yes\n" : "No\n"));
  }
  return 0;
}