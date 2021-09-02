#include <iostream>
using namespace std;

int DivideSum(int num) {
    int sum = num;

    while(num) {
        sum += (num % 10);
        num = num / 10;
    }

    return sum;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N;
    cin >> N;

    int res = 0;
    for(int i = 1; i <= N; i++) {
        if(N == DivideSum(i)) {
            res = i;
            break;
        }
    }

    cout << res << "\n";
}