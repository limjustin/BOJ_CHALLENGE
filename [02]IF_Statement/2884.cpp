#include <iostream>

using namespace std;

int main(void) {
  int h, m;
  
  cin >> h >> m;
  
  if (m < 45) {
    // m은 45에 덜 미친 시간만큼 빼주어야 함
    m = 60 - (45 - m);
    // h는 줄어들어야 하지만
    // 0시일경우, 23시로 복귀시켜야 함 (중요)
    (h == 0) ? h = 24 - 1  : h = h - 1;
  }
  else if (m >= 45) {
    // 그대로 빼면 된다
    m = m - 45;
  }
  
  cout << h << " " << m << "\n";
}

/*
0시에서 시간을 빼면 23시로 가는 처리해주는 것이 핵심!!
*/