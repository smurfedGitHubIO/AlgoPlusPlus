#include <bits/stdc++.h>
using namespace std;

int primes[] = {2,3,5,7,11,13,17,19,23,29,31,37,41};

void solve(int A[], set<int> stl, int k, int n){
  if(k == n){
    bool wholeCheck = true;
    for(int i=0; i<n; i++){
      bool checker = false;
      for(int j=0; j<13; j++){
        if(A[i%n] + A[(i+1)%n] == primes[j]){
          checker = true;
          break;
        }
      }
      wholeCheck &= checker;
    }
    if (wholeCheck) {
      for(int i=0; i<n; i++){
        printf("%d", A[i]);
        if(i < n-1){
          printf(" ");
        }
      }
      printf("\n");
    }
  } else {
    for(auto x : stl){
      for(int i=0; i<13; i++){
        if(x+A[k-1] == primes[i]){
          set<int> cstl = stl;
          cstl.erase(x);
          A[k] = x;
          solve(A, cstl, k+1, n);
        }
      }
    }
  }
}

int main(){
  int x;
  int k = 1;
  while(scanf("%d", &x) != EOF){
    if (k != 1) {
      printf("\n");
    }
    printf("Case %d:\n", k++);
    int A[x];
    A[0] = 1;
    set<int> stl;
    for(int i=2; i<=x; i++){
      stl.insert(i);
    }
    solve(A, stl, 1, x);
  }
  return 0;
}