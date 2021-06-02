#include <iostream>
using namespace std;

int goSnail(int A, int B, long long V) {
  int day = 0;
  int height = 0;
  
  while (true) {
    day++;
    
    // 낮에 A미터 올라가기
    height += A;
    
    // 정상에 올라갔는가?
    if(V <= height)
      break;
    
    // 밤에 B미터 미끄러지기
    height -= B;
    
  }
  
  return day;
  
}

int main(void) {
  int A; int B;
  long long V;
  
  cin >> A >> B >> V;
  
  cout << goSnail(A, B, V) << "\n";
}

// 시간대를 나눠서 다 올라가면 즉시 break;