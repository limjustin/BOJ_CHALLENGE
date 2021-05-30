#include <iostream>
#include <vector>
using namespace std;

int main(void) {
  int C; int N; int scr;
  vector<vector<int>> univ;
  int sum;
  vector<double> cls_sum;
  
  cin >> C;
  
  // Large loop
  for (int i = 0; i < C; i++) {
    
    // Small loop
    cin >> N;
    vector<int> cls;
    sum = 0;
    
    for(int j = 0; j < N; j++) {
      cin >> scr; // Input Score
      cls.push_back(scr);
      
      sum += scr;
    }
    
    cls_sum.push_back(sum);
    univ.push_back(cls);
  }
  
  // Get ratio
  int cnt;
  
  for(int i = 0; i < C; i++) {
    
    cnt = 0;
    
    for(int j = 0; j < univ[i].size(); j++) {
      
      if(cls_sum[i] / univ[i].size() < univ[i][j])
        cnt++;
    }
    
    printf("%.3f%% \n", (double)cnt / univ[i].size() * 100);
  }
  
  
  /*
  for(int i = 0; i < C; i++) {
    for(int j = 0; j < univ[i].size(); j++) {
      cout << univ[i][j] << " ";
    }
    cout << cls_sum[i] << "\n";
  }
  */
}