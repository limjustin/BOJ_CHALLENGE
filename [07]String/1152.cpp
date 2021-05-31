#include <iostream>
#include <string>
using namespace std;

int main(void) {
  // Input string
  string str;

  // cin >> str;  // 그냥 cin으로 받으면 공백 포함 안된다
  getline(cin, str);
  
  // Words count
  int cnt = 0;
  
  for(int i = 0; i < str.length(); i++) {
    // 문자열 가장 앞과 뒤는 무시
    if(i == 0)
      continue;
    
    else if(i == str.length() - 1)
      cnt += 1;
    
    // 문자열 앞뒤에 공백이 있을 경우
    else if(str.at(i) == ' ' && str.at(i - 1) != ' ' && str.at(i + 1) != ' ')
      cnt++;
    
  }
  
  cout << cnt << "\n";
  
}

// 다시 생각해보기
// 전체 문자열 개수에서 빼는것도 좋은 방법 (나이스함)
// 반례 a
// 구체적으로 어떻게 해야 잘 거르는지 다시 if 알고리즘 짜보기