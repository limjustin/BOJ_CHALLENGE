#include <iostream>
using namespace std;

int Family(int k, int n) {

    if(k == 0)
        return n;

    if(n == 1)
        return 1;
    
    return Family(k-1, n) + Family(k, n-1);
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int testcase;
    cin >> testcase;
    
    int k, n;
    while(testcase--) {
        cin >> k >> n;
        cout << getArray(k, n) << "\n";
    }
}

// 1 2 3 4 5 (k = 0)
// 1 3 6 10 15
// 1 4 10 20 35
// 1 5 15 35 70
// 1 6 21 56 126