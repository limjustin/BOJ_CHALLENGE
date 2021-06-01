#include <iostream>
#include <string>
using namespace std;

int CROATIA_ALPHABET(string str) {
  int cnt = 0;
  
  for(int i = 0; i < str.length(); i++) {
    
    printf("%c 일때 i = %d \n", str.at(i), i);

    // Case 1 : c로 시작
    if(str.at(i) == 'c' && i < str.length() - 1) {

      if(str.at(i + 1) == '=' || str.at(i + 1) == '-')
        i = i + 1; // Increase index

    }
    
    // Case 2 : d로 시작
    
    // Case 2-1 : dz=
    else if(str.at(i) == 'd' && i < str.length() - 2) {
      
      if(str.at(i + 1) == 'z' && str.at(i + 2) == '=')
        i = i + 2;

    }
    
    // Case 2-2 : d-
    else if(str.at(i) == 'd' && i < str.length() - 1) {
      
      if(str.at(i + 1) == '-')
        i = i + 1;
        
    }
    
    // Case 3 : j로 끝
    else if(str.at(i) == 'j' && i != 0) {
      
      if(str.at(i - 1) == 'l' || str.at(i - 1) == 'n')
        cnt--;
      
    }
    
    // Case 4 : =로 끝
    else if(str.at(i) == '=' && i != 0) {
      
      cnt--;
      
      // if(str.at(i - 1) == 's' || str.at(i - 1) == 'z')
      //   cnt--;
      // else
      //   cnt--; 
    }
    
    else if(str.at(i) == '-' || str.at(i) == '=')
      cnt--;
    
    // Case 5 : else
    cnt++;

  }
  
  return cnt;
}

int main(void) {
  string str;
  cin >> str;
  
  cout << CROATIA_ALPHABET(str) << "\n";
}

// 판단의 기준
// c,d로 시작 & j,=로 마무리

// 일단 하나씩 카운트

// 크로아아 알파벳이 맞으면 인덱스 하나 올리기