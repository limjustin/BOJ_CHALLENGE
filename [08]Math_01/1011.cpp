#include <iostream>
using namespace std;

// int cnt = 2;

int CENTAURI(int x, int y, int mv, int cnt) {
  printf("CENTAURI(%d, %d, %d) \n", x, y, mv);
  
  x = x + mv; // 움직였다는 뜻
  
  int rt;
  
  if(x > y) // 두번 표기 함
    rt = 0;
  
  else if(x == y) {
    printf("2nd if x : %d, mv : %d, next is %d \n", x, mv, x + mv);
    rt = 1;
  }
  
  // // 예외
  // if(y - x <= 1)
  //   return y - x;
    
  else {
    
    if(CENTAURI(x, y, mv + 1, cnt)) { // 10 5
      printf("3rd if x : %d, mv : %d, next is %d \n", x, mv + 1, x + mv + 1);
      cnt++;
      return 1;
  
    } else if (CENTAURI (x, y, mv, cnt)) { // 10, 4
      printf("4th if x : %d, mv : %d, next is %d \n", x, mv, x + mv);
      cnt++;
      return 1;
      
    } else if (CENTAURI (x, y, mv - 1, cnt)) { // 10, 3
      printf("5th if x : %d, mv : %d, next is %d \n", x, mv - 1, x + mv - 1);
      cnt++;
      return 1;
      
    }
    
  }
  
  cout << "cnt is " << cnt << "\n";
  
  return rt;
}

// int CENTAURI(int x, int y) {
//   int cnt;
//   int mv = 1;
  
//   if (y - x <= 2) {
//     cnt = y - x;
//   }
  
//   else {
//     x = x + 1;
//     y = y - 1;
//     cnt = 2;
    
//     while (x < y) {
//       mv++; // 앞으로 이동할 거리
      
//       // 거리가 오버되거나 1 차이나는 경우
//       // (중요) 틀린 부분 1 : 하지만 오버되도 그 거리만큼 안잘리면 못 감
      
//       if (x + mv > y || x + 1 == y) {
//         cnt++; // 사실 이미 도착한 것이니까
//         break;
//       }
      
//       x = x + mv;
//       cnt++;
//     }
//   }
  
  
//   return cnt;
// }

int main(void) {
  int T; // Test case
  cin >> T;
  
  // Test case loop
  int x, y;
  int mv = 1;
  int cnt = 2;
  
  for(int i = 0; i < T; i++) {
    cin >> x >> y;
    
    int k = CENTAURI(x, y - 1, mv, cnt);
  }
  
}

// 일단 y-1까지 생각해야 함
// 처음 시작할 때는 2칸씩 못 감

// (0 -> 1) -> (2 -> 3) : 3번
// (1 -> 2) -> (4 -> 5) : 3번
// (45 -> 46) -> 48 -> (49 -> 50) : 4번

// 계속 거리는 +1씩 더 움직이게 할 건데,
// (단, 거리가 2 이상으로 차이가 나는 경우만 이니시)
// 도착 전 지점에서 브레이크를 어케 거는지가 중요

// x==0일 경우는 +1만 움직임
// x = x + 1 해버리고, y = y - 1 해버리자 그러고 cnt는 2개 추가

// 그니까, 무작정 +1씩 더한다고 되는 것이 아니었음!!!!!
// 끝에서 얼만큼 다는지를 어케 알지?
// 이 단계에서 k+1만큼 가도 된다는 판단을 어떻게 내리지?
// (0 -> 1) -> 3 -> 6 -> 9 -> (11 -> 12)
// 그나마 나은 판단 시점은 절반 (= 6)!!
// (0 -> 1) -> 3 -> 6 -> 안되면 9 -> 일단 13 가보고 -> 일단 17가봐  (20 -> 21)
// 4칸 갔는데 3~5 바운더리 안에 들어갔다면 확정내기
// 일단 높은 함수부터 보내기
// 재귀 함수의 냄새가 나는데

// (0 -> 1) -> 3 -> 6 -> 10 (5,4,3) -> 15 (6,5,4) / 14 (5,4,3)-> (17 -> 18)
// (1 -> 2) -> 4 -> 7 -> 11 -> 14 -> 17
// 0 -> 1 -> 3 -> 6 -> 10 -> 15 -> 19(5,4,3) -> 22 -> 23