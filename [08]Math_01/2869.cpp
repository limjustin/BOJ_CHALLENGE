
#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
  long double A, B, V;
  cin >> A >> B >> V;
  
  printf("%d \n", (int)ceil((V - A) / (A - B)) + 1);
}

// 올라갔다가 내려가도 도착 안되는 점까지 간 다음에
// (2-1)x + 2 >= 5
// x >= 3
// (5-1)x + 5 >= 6
// x >= 1
// x + 100 >= 1000000000
// 가능하게 하는 정수보다 1 크게

/*
<큰 수를 다루는 계산 문제의 경우>
무작정 반복문을 돌리면 시간 초과가 발생할 확률 큼!!
따라서 방정식이나 수식을 활용해서 한 번에 구하자!!
*/