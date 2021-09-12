#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int n1, int n2) {
    return n1 > n2;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;

    vector<int> A;
    for(int i = 0; i < str.length(); i++)
        A.push_back(str.at(i) - 48);

    sort(A.begin(), A.end(), compare);

    for(int i = 0; i < A.size(); i++)
        cout << A[i];
}