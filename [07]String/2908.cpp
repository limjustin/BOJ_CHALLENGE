#include <iostream>
using namespace std;

int SANGSOO(int num) {
  int h; int t; int o;
  
  o = num % 10; num = num / 10;
  t = num % 10; num = num / 10;
  h = num % 10;
  
  return (o*100) + (t*10) + (h*1);
}

int main(void) {
  // Input numbers
  int num1, num2;
  cin >> num1 >> num2;
  
  // Get biggest
  (SANGSOO(num1) > SANGSOO(num2)) ? cout << SANGSOO(num1) << "\n" : cout << SANGSOO(num2) << "\n";

}

// 수 역전시켜주는 함수 하나 만들기