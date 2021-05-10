#include <iostream>

using namespace std;

int main(void) {
  int N, X;
  int a; 
  cin >> N >> X;
  
  for(int i = 1; i <= N; i++) {
    cin >> a;
    if(a < X)
      cout << a << " ";
  }
}