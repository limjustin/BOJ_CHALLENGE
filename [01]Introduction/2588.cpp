#include <iostream>

using namespace std;

int main(void) {
  int num_up, num_down;
  int res1, res2, res3;
  
  cin >> num_up;
  cin >> num_down;
  
  res1 = num_up * (num_down % 10); // 일의 자릿수
  res2 = num_up * (num_down - ((num_down / 100) * 100 + num_down % 10)) / 10;  // 십의 자릿수
  res3 = num_up * (num_down / 100); // 백의 자릿수
  
  cout << res1 << "\n";
  cout << res2 << "\n";
  cout << res3 << "\n";
  
  cout << res1 + res2*10 + res3*100 << "\n";
}