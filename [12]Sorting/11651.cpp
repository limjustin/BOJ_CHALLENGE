#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2) {
    if(p1.second == p2.second)
        return p1.first < p2.first;
    else
        return p1.second < p2.second;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    pair<int, int> p;
    vector< pair<int, int> > A;

    for(int i = 0; i < N; i++) {
        cin >> p.first >> p.second;
        A.push_back({p.first, p.second});
    }

    sort(A.begin(), A.end(), compare);

    for(int i = 0; i < N; i++)
        cout << A[i].first << " " << A[i].second << "\n";
}