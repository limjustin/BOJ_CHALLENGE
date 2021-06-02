#include <iostream>
using namespace std;

int arr[15][15];

int LivingFamily(int k, int n) {
  
  if(k == 0)
    return n;
  
  if(n == 1)
    return 1;
    
  return LivingFamily(k, n-1) + LivingFamily(k-1, n);
}

int main(void) {
  // Input Test case
  int T;
  cin >> T;
  
  // For-loop each Test case
  int k; int n;
  
  for(int i = 0; i < T; i++) {
    cin >> k;
    cin >> n;
    
    cout << LivingFamily(k, n) << "\n";
  }
}