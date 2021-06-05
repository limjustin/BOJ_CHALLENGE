#include <iostream>
#include <string>
using namespace std;

int CROATIA(string str) {
  // Count variable
  int cnt = 0;
  
  // For-loop for each string alphabet
  for (int i = 0; i < str.length(); i++) {
    
    cnt++;
    
    // Case 1, End with '=' (z=, c=, s=, dz=)
    if (str.at(i) == '=' && i > 0) {
      if (str.at(i - 1) == 'c' || str.at(i - 1) == 's')
        cnt--;
        
      else if (str.at(i - 1) == 'z' && i <= 1)
        cnt--;
      
      else if (str.at(i - 1) == 'z' && i > 1) {
        if (str.at(i - 2) == 'd')
          cnt = cnt - 2;
        else
          cnt--;
      }
    }
    
    // Case 2, End with '-'
    else if (str.at(i) == '-' && i > 0) {
      if (str.at(i - 1) == 'c' || str.at(i - 1) == 'd')
        cnt--;
    }
    
    // Case 3, End with 'j'
    else if (str.at(i) == 'j' && i > 0) {
      if (str.at(i - 1) == 'l' || str.at(i - 1) == 'n')
        cnt--;
    }
    
    printf("In %c, cnt is %d \n", str.at(i), cnt);
  }
  
  return cnt;
}

int main(void) {
  // Input string
  string str;
  cin >> str;
  
  // CROATIA Alphabet
  cout << CROATIA(str) << "\n";
}

// 핵심 1 : out of bound 문제 발생하지 않도록 생각
// 핵심 2 : 너무 복잡하게 알고리즘 설계하지 않기

// 기준 1 '=' : c=, dz= (따로 생각), s=, z=
// 기준 2 '-' : c-, d-
// 기준 3 'j' : lj, nj
// 셋 다 뒤로 가면서 찾아야 함!!
// 일단 안에서 한 글자씩 돌아야지

/* 
<처음에 고전했던 이유>
1. 인덱스 오버 문제
앞에서부터 조사하게 되니까
조건이 맞게되면 (i 일때 d고, i+1 일때 z면)
인덱스를 강제로 +1, +2 하였음.
-> 이게 out of Bound 문제를 일으킨 주범이 아닌가 생각.

2. if냐 else if도 쓰냐
뒤에서부터 조사를 하면 i의 조건만 잘 따지면
out of Bound 문제는 발생하지 않는데,
if 조건을 어떤 순서로 작성하냐와
if-else를 사용할 것인지, if-if를 사용할 것인지 여부가
답을 갈랐음.
*/