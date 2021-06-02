#include <iostream>
using namespace std;

int main(void) {
  // Input A, B, C
  long long A; // 고정 비용
  int B; // 가변 비용
  int C; // 노트북 가격
  
  cin >> A >> B >> C;
  
  // Get Break-Even Point
  long long bp = 1;
  
  if(C < B)
    printf("-1 \n");
  
  else {
    
    while (C * bp <= A + (B * bp)) {
      bp++;
    }
    
    printf("%d \n", bp);
  }
  
}

// 고정비용 A
// 가변비용 B
// 총 비용 = A+B <-> 총 수입

// 노트북가격 * x > 1000 + 70 * x 

// 시간초과 관련해서 공부해보기