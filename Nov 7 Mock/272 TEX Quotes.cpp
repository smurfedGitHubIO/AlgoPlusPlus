#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  char st[5000];
  bool q = false;
  while(scanf("%[^\n]%*c", st) != EOF){
    ll sl = strlen(st);
    for(ll i=0; i<sl; i++){
      if(st[i] == '"' and !q){
        printf("``");
        q = true;
      } else if (st[i] == '"' and q) {
        printf("''");
        q = false;
      } else {
        printf("%c", st[i]);
      }
    }
    printf("\n");
  }
  return 0;
}