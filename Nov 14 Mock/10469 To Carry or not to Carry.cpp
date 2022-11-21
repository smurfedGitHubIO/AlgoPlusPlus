#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n,m;
  while(scanf("%lld %lld", &n, &m) != EOF){
    printf("%lld\n", n^m);
  }
  return 0;
}