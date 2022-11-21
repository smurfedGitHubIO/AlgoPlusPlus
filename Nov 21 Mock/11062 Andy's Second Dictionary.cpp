#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  map<string, ll> msl;
  string cur = "", q="";
  char s[5000];
  while(fgets(s, 5000, stdin)){
    ll n = strlen(s);
    s[n-1] = '\0';
    for(ll i=0; i<n; i++){
      char ct = tolower(s[i]);
      if((ct >= 'a' and ct <= 'z') or (s[i] == '-' and i != n-2)){
        q += ct;
      } else if(i == n-2 and s[i] == '-'){
        cur += q;
        q = "";
      } else {
        if(q != ""){
          msl[cur+q] = 1;
          cur = "";
          q = "";
        }
      }
    }
    if(q != "" and cur != ""){
      msl[cur+q] = 1;
      cur = "";
    }
    q = "";
  }
  if(q != ""){
    msl[cur+q] = 1;
    cur = "";
  }
  for(auto x : msl){
    cout << x.first << "\n";
  }
}