#include <iostream>
#include <vector>
using namespace std;

int main(void) {
  // Input numbers
  vector<int> inp(10);
  
  for(int i = 0; i < inp.size(); i++) {
    cin >> inp[i];
  }
  
  // Get mod of 42
  vector<int> res(42); // Because mod is less than 42
  int md;
  
  for(int i = 0; i < inp.size(); i++) {
    md = inp[i] % 42;
    res[md]++;
  }
  
  // Count all different numbers (more than 0)
  int cnt = 0;
  
  for(int i = 0; i < res.size(); i++) {
    if(res[i] > 0)
      cnt++;
  }
  
  cout << cnt << "\n";
  
}

// 서로 다른 수들을 어떻게 카운트하냐가 문제
// 그냥 벡터를 100개 만드는 것도 나쁘지않은 선택
// 나머지 나눈 수를 인덱스로 사용해서 그냥 넣어버리기