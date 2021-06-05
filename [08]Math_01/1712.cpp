#include <iostream>
using namespace std;

int main(void) {
  int A, B, C;
  cin >> A >> B >> C;
  
  if(C <= B) {
    cout << "-1" << "\n";
  } else {
    cout << A / (C - B) + 1 << "\n";
  }

  return 0;
}

// 방정식 구해서 그 x 값에 하나만 넘기면 될거 같은데

/*
<시간 초과의 이유>
while 반복문을 돌려버림
21억이라는 수를 반복문을 돌리니까 시간 초과가 뜨지요
그냥 방정식으로 구해서 +1 하면 될 문제를!!
*/