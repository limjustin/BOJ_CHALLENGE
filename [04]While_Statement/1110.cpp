#include <iostream>

using namespace std;

int main(void) {
  int init_num, updated_num = -1;
  int tens, ones;
  int temp;
  int cnt = 0;
  
  // Input initital number
  cin >> init_num;
  temp = init_num;
  
  while (init_num != updated_num) {
    
    // Participate init_num
    // a = init_num/10; b = init_num%10;
    tens = temp / 10;
    ones = temp % 10;
  
    // Need number is b, a+b%10
    // New number updated (b*10) + mod
    updated_num = ones*10 + (tens+ones)%10;
    
    temp = updated_num;
    cnt++;
  }
  
  cout << cnt << "\n";
}