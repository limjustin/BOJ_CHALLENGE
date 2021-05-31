#include <iostream>
#include <string>
using namespace std;

int main(void) {
  // Input test case
  int T;
  cin >> T;
  
  // Repeat
  int R;
  string S;
  
  for(int i = 0; i < T; i++) {
    cin >> R;
    cin >> S;
    
    for(int s = 0; s < S.length(); s++) {
      for(int r = 0; r < R; r++)
        cout << S[s];
    }
    
    cout << "\n";
  }
  
}