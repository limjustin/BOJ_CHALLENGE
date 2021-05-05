#include <iostream>

using namespace std;

int main (void) {
  int dan;
  
  cin >> dan;
  
  if (dan >= 1 && dan <= 9) {
    for (int i = 1; i <= 9; i++)
      cout << dan << " * " << i << " = " << dan * i << "\n";
  }
}