#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    int num; vector<int> A;
    int sum = 0;

    vector<int> M(8001, 0);  // -4000 ~ 4000

    for(int i = 0; i < N; i++) {
        cin >> num;
        A.push_back(num);

        M[num + 4000]++;
        sum += num;
    }

    sort(A.begin(), A.end());

    int max = *max_element(M.begin(), M.end());

    int mode; bool switches = false;
    for(int i = 0; i < M.size(); i++) {
        if(M[i] == max && !switches) {
            mode = i - 4000;
            switches = true;
        } else if(M[i] == max && switches) {
            mode = i - 4000;
            break;
        }
    }

    cout << floor((double)sum/N + 0.5) << "\n";
    cout << A[(N-1)/2] << "\n";
    cout << mode << "\n";
    cout << A[N-1] - A[0] << "\n";
}