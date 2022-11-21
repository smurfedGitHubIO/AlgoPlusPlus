#include <bits/stdc++.h>
using namespace std;

int main(){
  char a,b,c;
  while(scanf("%c%c%c", &a, &b, &c) != EOF){
    cout << a << " " << b << " " << c << "\n";
    if (a != b and a != c){
      cout << "A\n";
    } else if(a != b and b != c) {
      cout << "B\n";
    } else if (a != c and b != c) {
      cout << "C\n";
    } else {
      cout << "*\n";
    }
  }
}