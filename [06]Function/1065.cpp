#include <iostream>
#include <vector>
using namespace std;

vector<int> hansoo(1001, 0);

void isHANSOO(int x) {
  if(x < 100)
    hansoo[x] = 1;
    
  else if(x < 1000) {
    int origin = x;
    
    int c = x % 10;
    x = x / 10;
    int b = x % 10;
    x = x / 10;
    int a = x % 10;
    
    if(2 * b == a + c)
      hansoo[origin] = 1;
  }
}

int main(void) {
  // Input N
  int N;
  cin >> N;
  
  // Get result less than N
  int cnt = 0;
  
  for(int i = 1; i <= N; i++) {
    isHANSOO(i);
    
    if(hansoo[i] == 1)
      cnt += 1;
  }
  
  cout << cnt << "\n";
}

// 한자리수 : 무조건 등차수열
// 두자리수 : 무조건 등차수열
// 세자리수 : 등차중항 구하면 댐