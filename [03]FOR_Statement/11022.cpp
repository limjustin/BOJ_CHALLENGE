#include <iostream>

using namespace std;

int main(void) {
  int T;
  int a, b;
  
  cin >> T;
  
  for (int i = 1; i <= T; i++) {
    cin >> a >> b;
    printf("Case #%d: %d + %d = %d\n", i, a, b, a+b);
  }
}