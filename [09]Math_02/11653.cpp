#include <iostream>
#include <vector>
using namespace std;

int main(void) {
  // Input variable N
  int N;
  cin >> N;
  
  // Get modulo
  while (N != 1) { // 이거로 다 나누어지는지 판단
  
    for(int i = 2; i <= N; i++) { // 소인수 분해 시작
      if(N % i == 0) {
        cout << i << "\n";
        N = N / i;
        break;
      }
    }
    
  }
}

/*
<처음 시행착오>
- 소수 배열을 만들어서 나누려고 했음
- 무조건 시간초과에 걸릴 수 밖에!!
<생각의 과정>
- 어차피 앞에서부터 나누는 것이란 말임
- 10,000,000보다 작은 소수 배열을 모두 구할 필요가 일단 없지
- 궁극적으로 수가 작으면 천만까지 for문을 돌릴 이유가 없어
- 그리고 나누는 수도 앞에서 끊을 수 있거든 (break문)
<결론>
-> 무언가 나눌 때는 범위도 생각하자!
-> 시간초과 주의하기!
*/