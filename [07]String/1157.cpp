#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> abc_cnt(26, 0);

void CountAlphabet(string orgstr) {
  
  for(int i = 0; i < orgstr.length(); i++) {
    
    if(orgstr.at(i) >= 97 && orgstr.at(i) <= 122) { // 소문자일 경우
      orgstr.at(i) -= 32; // 대문자로 변경
    }
    
    abc_cnt[orgstr.at(i) - 65]++; // 해당 알파벳에 카운트
  }
}

void getMax

int main(void) {
  // Input String
  string str;
  cin >> str;
  
  // Count Alphabet
  CountAlphabet(str);
  
  // Find biggest
  int mx = 0; int mx_idx = 0;
  int qstmask = 0;
  int samecnt = 0;
  
  for(int i = 0; i < abc_cnt.size(); i++) {
    if(mx < abc_cnt[i]) {
      mx = abc_cnt[i];
      mx_idx = i;
    }
  }
  
  // Check biggest same
  for(int i = 0; i < abc_cnt.size(); i++) {
    if(mx == abc_cnt[i] && abc_cnt[i] > 0)
      samecnt++;
  }
  
  if(samecnt >= 2)
    cout << "?" << "\n";
  else
    cout << (char)(mx_idx +65) << "\n";
  
}