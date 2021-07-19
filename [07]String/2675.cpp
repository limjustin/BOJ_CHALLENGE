#include <iostream>
#include <string>
using namespace std;

int main(void) {
    // 이 문제는 왜 이 문장이 안 먹힐까?
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL); cout.tie(NULL);

    int testcase;
    cin >> testcase;

    while(testcase--) {
        int R; string S;
        cin >> R >> S;

        for(int i = 0; i < S.length(); i++) {
            for(int j = 0; j < R; j++)
                cout << S.at(i);
        }

        cout << "\n";
    }
}