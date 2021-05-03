#include <iostream>

using namespace std;

int main(void) {
  int a, b;
  
  cin >> a >> b;
  
  if (a >= -10000 && a <= 10000 && b >= -10000 && b <= 10000) {
    if (a > b)
    cout << ">" << "\n";
    else if (a < b)
      cout << "<" << "\n";
    else
      cout << "==" << "\n";
  }
}