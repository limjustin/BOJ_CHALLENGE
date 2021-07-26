#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int A, B, C;
    cin >> A >> B >> C;

    long long res;

    if(C == B) {
        res = -1;
    } else if(floor(A/(C-B)) < 0) {
        res = -1;
    } else {
        res = floor(A/(C-B)) + 1;
    }

    cout << res << "\n";
}

// A = 고정비용, B = 가변비용, C=노트북가격
// A / (C - B) < x