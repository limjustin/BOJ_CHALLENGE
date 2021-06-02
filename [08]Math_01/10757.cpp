#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void) {
  string str1, str2;
  
  cin >> str1 >> str2;
  
  int mxln;
  
  if(str1.length() > str2.length())
    mxln = str1.length();
  else
    mxln = str2.length();
    
  int last = 0;
  vector<int> v;
  
  for(int i = mxln - 1; i >= 0; i--) {
    int s1, s2;
    int ssum = 0;
    
    // 둘의 일의 자리수 부터 더하기
    (str1.at(i) == ' ') ? s1 = 0 : s1 = (int)str1.at(i) - 48;
    (str2.at(i) == ' ') ? s2 = 0 : s2 = (int)str2.at(i) - 48;
    
    ssum = s1 + s2 + last;

    v.push_back(ssum % 10);
    
    if(i == 0 && ssum >= 10)
      v.push_back(1);
    
    
    // 단 더한 수가 10이 넘다면 다음에 더하기 아니면 0으로
    if(ssum >= 10)
       last = 1;
    else
       last = 0;
  }
  
  cout << v.size() << "\n";
  
  for(int i = v.size() - 1; i >= 0; i--)
    cout << v[i];
  
  cout << "\n";
}