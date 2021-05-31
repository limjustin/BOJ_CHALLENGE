#include <iostream>
#include <string>
using namespace std;

int main(void) {
  int N;
  string numstr;
  
  cin >> N;
  cin >> numstr;
  
  int sum = 0;
  
  for(int i = 0; i < N; i++) {
    sum += (numstr.at(i) - 48); // char형에서 48을 빼서 숫자화 시키는 것이 핵심
  }
  
  cout << sum << "\n";

}