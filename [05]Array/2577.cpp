#include <iostream>
#include <vector>
using namespace std;

int main(void) {
  // Input A,B,C
  int A, B, C;
  cin >> A;
  cin >> B;
  cin >> C;
  
  // Get result
  int res = A * B * C;
  int dgt;
  
  // Count each digit by while-statement
  vector<int> v(10);
  
  while (res > 0) {
    dgt = res % 10; // Load last digit of res
    
    v[dgt]++;
    
    res = res / 10;
  }
  
  // Print digit result
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << "\n";
  
}