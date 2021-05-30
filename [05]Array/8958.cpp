#include <iostream>
#include <vector>
using namespace std;

int main(void) {
  // Input number of test case
  int T;
  cin >> T;
  
  // Input each test cases
  vector<string> quiz; // quiz array size is same as for-loop count
  char testcase[80];
  
  for(int i = 0; i < T; i++) {
    scanf("%s", testcase);
    quiz.push_back(testcase);
  }
  
  // Get score of each quiz
  for(int i = 0; i < T; i++) {
    
    int cnt = 0;
    int result = 0;
    
    for(int j = 0; j < quiz[i].size(); j++) {
      
      // 'X'라면 당연히 카운트는 0으로 다시 초기화
      if(quiz[i][j] == 'X')
        cnt = 0;
      
      // 카운트를 1 올리고 넘어가는 방식
      else if(quiz[i][j] == 'O')
        cnt = cnt + 1;
      
      result += cnt;
    }
    
    cout << result << "\n"; // 여기서도 굳이 결과 벡터 만들이유 X
  }

}

/*
<처음에 헤매었던 점>
1. 문자열들을 어떻게 담을 것인가?
-> 문제 : 문자열 vector는 없나? 2차원 배열을 vector로 어떻게 구현하지?
-> 해결 : String vector 안에 char 배열 push_back
          근데 이게 제일 깔끔할지는 잘 머르겠음
-> 예제 :   vector<string> str;
            char arr1[20] = "Hello World";
            str.push_back(arr1);
            char arr2[20] = "Welcome Seoul";
            str.push_back(arr2);
            cout << str[1][2] << "\n";
                    
-> 문제 : 문자열을 cin으로 어떻게 받을 거야?
-> 해결 : 배열 쓰니까 해결(scanf)


2. 연속된 'O'표 어떻게 처리할 것인가? 
-> 해결 : 누적변수 사용
          'O'표가 나오면 계속 누적해서 그 값을 더하고,
          'X'표가 나오면 누적된 값 초기화해서 다시 시작
*/