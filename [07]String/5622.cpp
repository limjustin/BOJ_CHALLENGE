#include <iostream>
#include <string>
using namespace std;

int DIALtoNUM(char c) {
  int num;
  
  if (c == 'A' || c == 'B' || c == 'C')
    num = 2;
  else if (c == 'D' || c == 'E' || c == 'F')
    num = 3;
  else if (c == 'G' || c == 'H' || c == 'I')
    num = 4;
  else if (c == 'J' || c == 'K' || c == 'L')
    num = 5;
  else if (c == 'M' || c == 'N' || c == 'O')
    num = 6;
  else if (c == 'P' || c == 'Q' || c == 'R' || c == 'S')
    num = 7;
  else if (c == 'T' || c == 'U' || c == 'V')
    num = 8;
  else if (c == 'W' || c == 'X' || c == 'Y' || c == 'Z')
    num = 9;
    
  return num;
}

int main(void) {
  // Input string
  string str;
  cin >> str;
  
  // Dial to each Number
  int sum = 0;
  
  for(int i = 0; i < str.length(); i++) {
    sum += (DIALtoNUM(str.at(i)) + 1);
  }
  
  cout << sum << "\n";
}

// 알파벳에 해당하는 숫자 다 구하고
// 구한 값에 +1씩 해서 다 더하면 답