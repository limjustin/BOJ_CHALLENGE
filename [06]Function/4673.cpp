#include <iostream>
#include <vector>
using namespace std;

vector<int> self_number(10001, 0);

void d(int n) {
  int origin = n;
  int sum = 0;
  
  while (n > 0) {
    sum += (n % 10);
    n = n / 10;
  }
  
  sum += origin;
  
  if(sum <= 10000)
    self_number[sum] = 1; // 더할때 메모리가 넘어갔음
}

int main(void) {
  
  for(int i = 1; i <= 10000; i++) {
    d(i);
    
    if(self_number[i] == 0)
      printf("%d \n", i);
  }
  
}

// 일단 d(n)을 따로 함수로 구현하는 것이 중요
// 10000은 반복문 사용해서 1부터 돌리면 가능
// 생성자의 유무를 어떻게 판단해야하나...
// 우리가 사용할 수 있는 것은 함수 뿐임
// 숫자 n을 함수에 넣어서 나온 결과 값의 인덱스를 1로 체크
// 그러고 0으로 나온 것들, 즉 체크가 안된 것들만 프린트 하면 될 듯