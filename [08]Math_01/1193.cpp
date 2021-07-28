#include <iostream>
#define MAX 10000000
using namespace std;

void Fraction(int num) {
    int idx; int len; int sum = 0;
    for(int i = 1; sum < MAX ; i++) {
        sum = i * (i + 1) / 2;

        if(num <= sum) {
            idx = i;
            len = sum - num;
            break;
        }
    }

    if(idx % 2) {
        cout << len + 1 << "/" << idx - len << "\n";
    } else {
        cout << idx - len << "/" << len + 1 << "\n";
    }

}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int X;
    cin >> X;

    Fraction(X);
}

// 일단 등차수열의 합 안으로 들어감
// 짝수면 분모부터, 홀수면 분자부터 (등차수열 합 라인)
// 1이 남잖아 뺀수 + 1 / 일반항 - 뺀수