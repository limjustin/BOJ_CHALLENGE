#include <iostream>
using namespace std;

int main(void) {
  int a, b;
  cin >> a >> b;
  
  if(a > 0 && a <= 10000 && b > 0 && b <= 10000) {
    cout << a+b << "\n";
    cout << a-b << "\n";
    cout << a*b << "\n";
    cout << a/b << "\n";
    cout << a%b << "\n";
  }
}