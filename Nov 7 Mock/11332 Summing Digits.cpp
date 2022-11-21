#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  char s[500];
  bool q = false;
  while(scanf("%[^\n]s", s) != EOF){
    ll sl = strlen(s);
    for(ll i=0; i<sl; i++){
      if(s[i] == '"' and !q){
        printf("``");
        q = true;
      } else if (s[i] == '"' and q) {
        printf("''");
        q = false;
      } else {
        printf("%c", s[i]);
      }
    }
    printf("\n");
  }
  return 0;
}