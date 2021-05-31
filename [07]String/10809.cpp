#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void) {
  string str;
  vector<int> alphabet(26, -1);
  
  cin >> str;
  
  for(int i = 0; i < alphabet.size(); i++) {
    for(int s = 0; s < str.length(); s++) {
      if(str.at(s) == (char)(i + 97) && alphabet[i] == -1) // 중복될땐 뒤에있는 인덱스가 들어가는 문제
        alphabet[i] = s;
    }
  }
  
  for(int i = 0; i < alphabet.size(); i++)
    cout << alphabet[i] << " ";
}