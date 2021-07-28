#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int testcase;
    int H, W, N;
    cin >> testcase;

    while(testcase--) {
        cin >> H >> W >> N;

        if(N % H == 0) {
            if(N / H + 1 < 10)
                cout << H << 0 << (N / H) << "\n";
            else
                cout << H << (N / H) << "\n";
        } else {
            if(N / H + 1 < 10)
                cout << N % H << 0 << (N / H + 1) << "\n";
            else
                cout << N % H << (N / H + 1) << "\n";
        }
    }
}

// 층 수는 N % H - 1 // N이 H의 배수일 때는 예외로 하자
// 호 수는 N / H + 1