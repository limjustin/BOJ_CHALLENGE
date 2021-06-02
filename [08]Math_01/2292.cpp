#include <iostream>
using namespace std;

int getBEE(int num) {
  int cnt = 0;
  
  if(num == 1)
    cnt = 1;
  
  else {
    int n = 1;
    
    while (num >= 2 + 3*n*n + 3*n)
      n++;
    
    cnt = n + 1;
  }
  
  return cnt;
}

int main(void) {
  long long N;
  cin >> N;
  
  cout << getBEE(N) << "\n";
}

// 1개 : 1 (1)
// 2개 : 2 ~ 7 (6) 2 <= < 2 + 6
// 3개 : 8 ~ 19 (12) 2 + 6 <= < 2 + 6 + 12 
// 4개 : 20 ~ 37 (18)
// 5개 : 38 ~ 61 (24)