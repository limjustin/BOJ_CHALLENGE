#include <iostream>
#include <string>
#include <vector>
using namespace std;

string toUpper(string orgstr) {
  
  for(int i = 0; i < orgstr.length(); i++) {
    if(orgstr.at(i) >= 97 && orgstr.at(i) <= 122) { // 소문자일 경우
      orgstr.at(i) -= 32; // 대문자로 변경
    }
  }
  
  return orgstr;
}

int main(void) {
  string str;
  cin >> str;
  
  // 다 대문자로 바꿔버릴까
  string resstr;
  resstr = toUpper(str);
  
  cout << resstr;
  
}