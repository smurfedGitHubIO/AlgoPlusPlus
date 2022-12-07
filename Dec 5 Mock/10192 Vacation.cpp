#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  char s[5000];
  char t[5000];
  ll cur = 1;
  while(fgets(s, 5000, stdin)){
    if(s[0] == '#') break;
    fgets(t, 5000, stdin);
    ll a = strlen(s);
    ll b = strlen(t);
    if(s[a-1] == '\n'){
      s[a-1] = '\0';
      --a;
    } if (t[b-1] == '\n') {
      t[b-1] = '\0';
      --b;
    }
    ++a, ++b;
    ll A[a][b];
    for(ll i=0; i<a; i++){
      A[i][0] = 0;
    }
    for(ll j=0; j<b; j++){
      A[0][j] = 0;
    }
    for(ll i=1; i<a; i++){
      for(ll j=1; j<b; j++){
        if (s[i-1] == t[j-1]){
          A[i][j] = 1+A[i-1][j-1];
        } else {
          A[i][j] = max(A[i-1][j], A[i][j-1]);
        }
      }
    }
    cout << "Case #" << cur++ << ": you can visit at most " << A[a-1][b-1] << " cities.\n";
  }
  return 0;
}