#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    int num; int mx = 0;
    vector<int> A(10001, 0);  // 이 vector를 잘 제어했어야 했다

    for(int i = 0; i < N; i++) {
        cin >> num;
        A[num]++;

        if(mx < num)
            mx = num;
    }

    // 해당 인덱스를 나온 빈도수만큼 프린트하는 아이디어
    // 2 2 2 1 2 0 1 (1을 2번, 2를 2번...)
    for(short i = 1; i <= mx; i++) {
        for(int p = 0; p < A[i]; p++) {
            cout << i << "\n";
        }
    }
}

// 탐구 1) 사실 얘는 정렬 문제가 아니다?
// CountingSort를 사용하려고 했으나, 메모리 초과가 발생.
// 메모리를 8MB로 한정해놓았기 때문에 배열을 잘 써야하는 상황.
// Input array 형태로 입력을 받을 경우 메모리 초과가 발생!!
// 따라서, 입력을 전부 저장하지 않고 푸는 방법을 생각했어야 한다!!

// 탐구 2) 왜 이런 문제가 출제되는것인가에 대한 고민해보기
// 굳이 입력 배열을 만들 필요가 없었기 때문에...?