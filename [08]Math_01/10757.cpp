/*
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
*/
// 일단 정수로 받는 것은 말이 안댐
// 근데 더할 때 인덱스가 꼬이는 문제가 생김
// str 두개를 반복문으로 돌리되, 먼저 끝나면 나머지는 그대로 더하기

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
  // Input string
  string str1;
  string str2;
  cin >> str1 >> str2;
  
  int i = str1.length() - 1;
  int j = str2.length() - 1;
  
  vector<int> res;
  
  int sum = 0;
  int isTen = 0;
  
  do {
    sum = (str1.at(i) - 48) + (str2.at(j) - 48) + isTen;
    
    if(sum > 9) {
      res.push_back(sum % 10);
      cout << sum % 10;
      isTen = 1;
    }
    else {
      res.push_back(sum);
      cout << sum;
      isTen = 0;
    }
    
    printf("get log");
    
    i--; j--;
    
  } while (i >= 0 || j >= 0);
  
  // if (i != 0) {
  //   for(int k = i; k >= 0; k--) {
  //     res.push_back(str1.at(k) - 48 + isTen);
      
  //     if(str1.at(k - 48) + isTen > 9)
  //       isTen = 1;
  //     else
  //       isTen = 0;
  //   }
  // } else if (j != 0) {
  //   for(int k = j; k >= 0; k--) {
  //     res.push_back(str2.at(k) - 48 + isTen);
          
  //     if(str2.at(k - 48) + isTen > 9)
  //       isTen = 1;
  //     else
  //       isTen = 0;
  //   }
  // }
  
  // for(int i = res.size(); i >= 0; i--)
  //   cout << res.at(i);
  
}