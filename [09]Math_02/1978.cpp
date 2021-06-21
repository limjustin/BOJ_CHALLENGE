#include <iostream>
using namespace std;

int isPrime(int num) {
  // Binary variable
  int binary = 1;
  
  if(num == 1)
    return 0;
  
  // Prime number algorithm
  for(int i = 2; i <= num; i++) {
    if(num % i == 0 && num != i) {
      binary = 0;      
      break; // Not prime number
    }
  }
  
  return binary;
}

int main(void) {
  // Input variable N
  int N;
  cin >> N;
  
  // Input numbers
  int num;
  int cnt = 0;
  
  for (int i = 0; i < N; i++) {
    cin >> num;
    
    if(isPrime(num) == 1)
      cnt++;
  }
  
  cout << cnt << "\n";
}