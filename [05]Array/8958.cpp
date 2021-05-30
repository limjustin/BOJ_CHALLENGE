#include <iostream>
#include <vector>
using namespace std;

struct TEST_CASE {
  char test_case[80];
};

int main(void) {
  // Input N
  int N;
  cin >> N;
  
  // Make test case vector
  vector<TEST_CASE> tc_vector;
  TEST_CASE tc;
  
  for(int i = 0; i < N; i++) {
    // cin >> test_case; // 이거 공부하기!!
    scanf("%s", tc.test_case);
    
    tc_vector.push_back(tc);
  
    printf("%s", tc_vector[i]);
    
  }
  
  for(int i = 0; i < N; i++) {
    
  }
}

// vector로 문자열을 받을 수 있냐?
// 처음 벡터를 만들고 문자열을 받고 push_back 하면 될 듯
// 카운트를 세는데 이전이 1 이상이면 1에다가 누적 카운트

// 앞으로 취할 방향
// 1. 문자열 2차원 배열 어케 받을지
// 2. 받을 때 scanf or cin