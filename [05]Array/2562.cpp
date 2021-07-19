#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int num;
    int mx = 0; short idx;
    for(short i = 1; i <= 9; i++) {
        scanf("%d", &num);

        if(num > mx) {
            mx = num;
            idx = i;
        }
    }

    cout << mx << "\n" << idx << "\n";
}