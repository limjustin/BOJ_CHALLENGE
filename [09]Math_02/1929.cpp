#include <iostream>
using namespace std;

int ERATOS(int n) {
  if(n == 1)
    return 0;
  
  int bin = 1;
  
  for(int i = 2; i <= n; i++) {
    if(n % i == 0 && n != i) {
      bin = 0;
      break;
    }
  }
  
  return bin;
}

int main(void) {
  int a, b;
  cin >> a >> b;
  
  vector<int> prmvc;
  
  for(int i = a; i <= b; i++) {
    prmvc.push_back(i);
  }
  
  for(int i = 0; i < prmvc.size(); i++) {
    if(ERATOS(i)) {
      cout << i << "\n";
    }
    
    for(int j = 0; j < prmvc.size()/i; j++)
      v[j]
  }
  
}

/*
반복문을 사실상 제곱만큼 도는 것임
이미 2의 배수면, 그 다음 2의 배수를 어떻게 못 돌게 할 것인지...
"생각하는 것 그대로 따라가자"
*/

3은 소수야? 응 소수야 출력
4는 소수야? 소수 아니야 4의 배수는 다 제거
5는 소수야? 응 소수야 출력
6은 소수야? 소수 아니야 6의 배수는 다 제거
7은 소수야? 응 소수야 출력

모든 숫자들을 배열에 담아서
이게 소수면 출력하고 배수 해당하는 것 배열에서 다 빼고

