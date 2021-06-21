#include <iostream>
using namespace std;

int isPrime(int num) {
  int binary = 1;
  
  if(num == 1)
    return 0;
    
  for(int i = 2; i <= num; i++) {
    if(num % i == 0 && num != i) {
      binary = 0;
      break;
    }
  }
  
  return binary;
}

int main(void) {
  // Input variable M, N
  int M, N;
  cin >> M;
  cin >> N;
  
  // For M to N
  int sum = 0;
  int mn = N + 1;
  
  for(int i = M; i <= N; i++) {
    if(isPrime(i) == 1) {
      sum += i;
      
      if(mn > i)
        mn = i;
    }
  }
  
  // Get result
  if(sum == 0)
    cout << "-1" << "\n";
  else
    cout << sum << "\n" << mn << "\n";
  
}