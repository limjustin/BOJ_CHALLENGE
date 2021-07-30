#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N;
    cin >> N;

    int i = 2;

    while (N != 1) {
        if(N % i == 0) {
            cout << i << "\n";
            N = N / i;
        }
        else
            i++;
    }

}

// 수를 받고 나누는데
// 안 나눠지면 +1을 하면 되지!
// 4는 이미 2로 두번 나눠졌기 때문에 노상! 어차피 넘어감!!