#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    int num; vector<int> A;
    for(int i = 0; i < N; i++) {
        cin >> num;
        A.push_back(num);
    }

    sort(A.begin(), A.end());

    for(int i = 0; i < N; i++)
        cout << A[i] << "\n";
}