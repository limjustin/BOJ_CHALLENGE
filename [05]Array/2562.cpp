#include <iostream>
#include <vector>
#define NUM 9
using namespace std;

vector<int> v;

void findMAX() {
  int idx = 0;
  int mx = v[0];
  
  for(int i = 0; i < NUM; i++) {
    if(mx < v[i]) {
      idx = i;
      mx = v[i];
    }
  }
  
  cout << mx << "\n";
  cout << idx + 1 << "\n";
}

int main(void) {
  
  // Variable
  int x;
  
  // Input num to Array
  for(int i = 0; i < NUM; i++) {
    cin >> x;
    v.push_back(x);
  }
  
  // Find Max Algorithm
  findMAX();
}

/*
<findMAX 함수에서>
if문을 안들어갔을 때,
초기화한 값으로 결과가 출력되게 되는데,
이 값이 잘못되지 않았는지 판단 못해서 틀렸음!!
*/