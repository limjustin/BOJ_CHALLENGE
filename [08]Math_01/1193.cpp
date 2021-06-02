#include <iostream>
using namespace std;

void getFractions(int num) {
  
  int frc = 1;
  int ltsum = 0;
    
  for(int n = 1; num > n*(n+1)/2; n++) {
    frc++;
    ltsum = n*(n+1)/2;
  }
  
  int md; int sn;
  
  if(frc == 1) // 이러면 1일 때는 특수경우이니 생각해야함!!
    cout << "1/1" << "\n";
  
  else if(frc % 2) {
    md = frc - (num - ltsum) + 1;
    sn = frc - md + 1;
    
    cout << md << "/" << sn << "\n";  
  } // 홀수
  
  else {
    sn = frc - (num - ltsum) + 1;
    md = frc - sn + 1;
    
    cout << md << "/" << sn << "\n";
  } // 짝수
}

int main(void) {
  long long X;
  
  cin >> X;
  
  getFractions(X);
}

// 자릿수의 시작을 구하면 될 듯
// 1/1 : 1번째 1
// 2번째의 시작 : 1/2 3
// 3번째의 시작 : 3/1 6
// 4번째의 시작 : 1/4 10