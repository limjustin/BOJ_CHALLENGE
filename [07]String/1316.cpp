#include <iostream>
#include <string>
#include <vector>
using namespace std;

int isRepeat(string str) {
  
  // 알파벳 벡터 만들기
  vector<int> abc(26, 0);
  
  // 각각 나타날때마다 값을 더하기
  int idx;
  int isrepeat = 1;
  
  for(int i = 0; i < str.length(); i++) {

    idx = ((int)str.at(i) - 97); // 알파벳의 인덱스
    
    if(i > 0) { // 일단 이 식으로 out of index 방지 
      // 이전 것과 값이 다른데 세팅값이 0이 넘는다면
      if(str.at(i) != str.at(i - 1) && abc[idx] > 0) {
        isrepeat = 0;   
        break;
      }
    }
    
    abc[idx]++;
  }
  
  return isrepeat;
  
}

int main(void) {
  
  // Input N
  int N;
  cin >> N;
  
  // Input words
  int cnt = 0;
  string str;
 
  for(int i = 0; i < N; i++) {
    cin >> str;

    if(isRepeat(str)) {
      cnt++;
    }
  }
 
  cout << cnt << "\n";

}

/*
- 꼼수라면, if안에 또 if써서 밖에 if로 out of index 방지하기!!
*/