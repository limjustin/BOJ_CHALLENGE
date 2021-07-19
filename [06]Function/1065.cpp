#include <iostream>
using namespace std;

int HANSOO(int num) {
    int cnt = 0;

    for(int i = 1; i <= num; i++) {
        if(i < 100) {
            cnt++;
            continue;
        } else if(i == 1000) {
            break;
        } else if((i%10) + (i/100) == 2 * ((i % 100) / 10)) {
            cnt++;
        }
    }

    return cnt;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N;
    cin >> N;

    int cnt = 0;

    cout << HANSOO(N) << "\n";
}