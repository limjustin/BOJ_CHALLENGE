#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int Centauri(int num) {
    int len;

    // 오답) 해당하는 일반항 인덱스를 구하기
    for(int n = 1; n*n + n < pow(2, 31); n++) {
        if(num <= n*n + n) {
            len = n;
            break;
        }
    } // 이유 : 시간 초과. 당연히 2^31을 O(n)의 시간 복잡도로 돌리니까 발생.


    // 정답) 위 처럼 하면 안 되고, 이진탐색 알고리즘을 짜볼까?
    // why? : O(n)은 시간 초과니까 O(log n)의 시간 복잡도를 가지는 이진탐색으로 시도.
    int s = 0; double e = pow(2, 31);
    double m;

    while(e - s >= 0) {
        m = (s+e) / 2;

        if((m-1)*(m-1)+(m-1) < num && num <= m*m+m) {
            len = m;
            break;
        } else if (num > m*m+m) {
            s = m + 1;
        } else if (num <= (m-1)*(m-1)+(m-1)) {
            e = m - 1;
        }
    } // 훨씬 적은 시간으로 목표한 값에 도달할 수 있었음.


    // 더 가까운 쪽을 판별하기
    if((len*len+len - num) > (num - ((len-1)*(len-1)+(len-1) + 1)))
        return 2 * len - 1;   
    else
        return 2 * len;
   
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    // 테스트 케이스 값 넣기
    int testcase;
    cin >> testcase;

    // 각 테스트케이스에 대한 답 추출
    int x, y;

    while(testcase--) {
        cin >> x >> y;
        cout << Centauri(y - x) << "\n";
    }
}