#include <iostream>
using namespace std;

int HOTELACM(int H, int W, int N) {
  int room;
  int flr;
  
  if(N % H == 0) {
    room = N / H;
    flr = H;
  }
  else {
    room = N / H + 1;
    flr = N % H;
  }
  
  return flr * 100 + room;
}

int main(void) {
  // Input Variables
  int T;
  int H; int W; int N;
  
  cin >> T;
  
  // test case in for-loop
  for(int i = 0; i < T; i++) {
    cin >> H >> W >> N;
    
    cout << HOTELACM(H, W, N) << "\n";
  }
}

// 30, H가 한 스왑 도는 것
// N을 H로 나눈 몫이 그 층에 호수 번호
// 나머지가 층의 번호

/*
<뇌정지 왔던 이유를 생각해보자>
- 나머지는 0 ~ 5인데 배정되는 것은 1 2 3 4 5 0 순이었음
- 그렇다고 +1씩하자니 위치가 하나씩 밀림
- 결론 : 나머지가 0일 때랑 아닐 때 나눠서 값을 구했어야 함!!
*/