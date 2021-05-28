#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

void findMAXandMIN() {
  int mx, mn;
  
  mx = v[0];
  mn = v[0];
  
  for (int i = 0; i < v.size(); i++) {
    if(mx < v[i])
      mx = v[i];
    else if(mn > v[i])
      mn = v[i];
  }
  
  cout << mn << " " << mx << "\n";
}

int main(void) {
  // Variable
  int N;
  int ip;
  
  // Input N
  cin >> N;
  
  // Input Array
  for (int i = 1; i <= N; i++) {
    cin >> ip;
    v.push_back(ip);
  }
  
  // Max & Min Algorithm
  findMAXandMIN();
}