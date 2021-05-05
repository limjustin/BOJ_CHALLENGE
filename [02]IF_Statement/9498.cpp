#include <iostream>

using namespace std;

int main(void) {
  int res;
  cin >> res;
  
  if(res >= 0 && res <= 100) {
    if (res >= 90 && res <= 100)
      cout << "A" << "\n";
    else if (res >= 80 && res <= 89)
      cout << "B" << "\n";
    else if (res >= 70 && res <= 79)
      cout << "C" << "\n";
    else if (res >= 60 && res <= 69)
      cout << "D" << "\n";
    else
      cout << "F" << "\n";
  }
  
}