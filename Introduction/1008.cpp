#include <iostream>
using namespace std;

int main(void) {
  double a, b;
  cin >> a >> b;
  if (a > 0 && a < 10 && b > 0 && b < 10)
    printf("%.9f \n", a/b);
}

/*
1. 출력값의 절대오차, 상대오차를 고려하지 않음
2. 10의 -9 제곱이니까 소수점 9자리까지 표기했어야 함
3. C++에서도 printf를 사용할 수 있었다고요
*/