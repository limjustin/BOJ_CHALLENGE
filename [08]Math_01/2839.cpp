#include <iostream>
using namespace std;

int SUGAR(int kg) {
  int min = kg;
  int nonkg = 1;
  
  for(int i = 0; (5*i) <= kg; i++) { // 0부터 시작!!
    for(int j = 0; (3*j) <= kg; j++) { // 등호도 붙여야지!!
      if((5*i) + (3*j) == kg && min > i + j) {
        min = i + j;
        nonkg = 0;
      }
    }
  }
  
  if (nonkg)
    return -1;
  else
    return min;
}

int main(void) {
  int N;
  cin >> N;
  
  cout << SUGAR(N) << "\n";
}

// 5를 먼저 for문으로 돌린 다음에
// 안에서 3을 for문으로 돌리고
// 더해지는 값이 그 수가 되면 그때 각각 미지수가 몇이었는지 구하고
// 최소면 담아두고 아니면 패스