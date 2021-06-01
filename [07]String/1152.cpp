#include <iostream>
#include <string>
using namespace std;

int main(void) {
  // Input string
  string str;
  // cin >> str;  // 그냥 cin으로 받으면 공백 포함 안된다
  getline(cin, str);
  
  // Words count
  int LEN = str.length();
  
  if(str == " ") // Exception
    cout << LEN - 1 << "\n"; // 공백만 입력된 것은 문자열 아니지
    
  else {
    
    for(int i = 0; i < str.length(); i++) {
      
      // 문자열 앞과 뒤 공백은 그냥 알파벳으로 처리
      if(str.at(i) == ' ' && (i == 0 || i == str.length() - 1))
        LEN -= 1;
      
      // 공백 아닐 때 감소
      if(str.at(i) != ' ')
        LEN -= 1;
    }
    
    // 최종적으로 공백의 수에 +1 (마지막 단어)
    // 항상 마지막 결과 나올 때 조심
    cout << LEN + 1 << "\n";
  }
  
}

/*
<알고리즘 구현 문제>
- 알고리즘을 생각하는데 꽤 오래걸렸던 문제
- 전체 문자열 길이에서 공백 제외해서 빼는 것이 좋은 아이디어
- 공백 포함 문자열은 getline을 통해서 받자!! (중요)
- 문자열 앞뒤 공백을 어떻게 처리할지 고민
- 반례 'a'만 나오는 경우에서 어떻게 할지 고민 -> 공백 제외 빼기로 해결
- 반레 ' '만 나오는 경우어서 어떻게 할지 고민 -> 예외 if문 생성통해 해결
- 항상 마지막 결과 나올 때 조심, "예외사항이 들어가진 않는가?" 항상 체크
*/