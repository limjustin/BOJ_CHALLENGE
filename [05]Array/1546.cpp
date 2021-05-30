#include <iostream>
#include <vector>
using namespace std;

int main(void) {
  // Input N and score of subjects
  vector<double> scr(1000);
  int N;
  int mx_score = 0;
  
  cin >> N;
  
  for(int i = 0; i < N; i++) {
    cin >> scr[i];
    
    if(mx_score < scr[i]) // Find max score
      mx_score = scr[i];
  }
  
  // printf("mx_score is %d \n", mx_score);
  
  // Get average
  double sum = 0;
  
  for(int i = 0; i < N; i++) {
    scr[i] = scr[i] / mx_score * 100;
    
    sum += scr[i];
  }
  
  // Print result
  printf("%.2f \n", sum / N);
}

/*
소수점으로 나온 평균들을
정수형 sum 값에 더하니까
값의 손실이 발생
(결론, sum도 double로 선언하기)
*/