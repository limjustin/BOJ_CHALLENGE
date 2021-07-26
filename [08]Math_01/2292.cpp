#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N;
    cin >> N;

    int sum = 0;
    for(int i = 0; sum <= 1000000000; i++) {
        sum = 1 + 3*i*i + 3*i;
        if(N <= sum) {
            cout << i + 1 << "\n";
            break;
        }
    }
}
// 1
// 2 ~ 7 (6)
// 8 ~ 19 (12)
// 20 ~ 38 (18)
// 1 + n6n+6/2