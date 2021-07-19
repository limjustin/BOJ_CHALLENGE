#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int testcase;
    cin >> testcase;

    string nums;
    cin >> nums;

    int sum = 0;
    for(int i = 0; i < testcase; i++) {
        sum += nums.at(i) - 48;
    }
    cout << sum << "\n";
}