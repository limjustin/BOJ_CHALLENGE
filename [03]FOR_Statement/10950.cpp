#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  int T;
  int num1, num2; // Input Number
  vector<int> v; // vector로 값 저장
  
  cin >> T;
  
  // 처음 든 생각, 변수선언을 유동적으로 해야하나?
  for (int i = 1; i <= T; i++) {
    cin >> num1 >> num2;
    v.push_back(num1 + num2);
  }
  
  vector<int>::iterator iter;
  for(iter = v.begin(); iter != v.end(); iter++)
    cout << *iter << "\n";
}