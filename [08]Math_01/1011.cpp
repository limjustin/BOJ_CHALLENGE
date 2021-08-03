#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int Centauri(int num) {
    int len; int res;

    // 해당하는 일반항 인덱스를 구하기
    for(int n = 1; n*n + n < pow(2, 31); n++) {
        if(num <= n*n + n) {
            len = n;
            break;
        }
    }

    // 위 처럼 하면 안 되고, 이분탐색 알고리즘을 짜볼까?
    

    // 더 가까운 쪽을 판별하기
    if((len*len+len - num) > (num - ((len-1)*(len-1)+(len-1) + 1))) {
        res = 2 * len - 1;   
    } else {
        res = 2 * len;
    }

    return res;
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