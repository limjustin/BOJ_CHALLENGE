#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2) {
    return p1.second < p2.second;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector< pair<int, int> > crd; int num;
    
    for(int i = 0; i < N; i++) {
        cin >> num;
        crd.push_back(make_pair(num, i));
    }

    stable_sort(crd.begin(), crd.end());

    int prev = 1000000001;
    int idx = 0; int temp;

    for(int i = 0; i < N; i++) {
        temp = crd[i].first;

        if(prev != crd[i].first) {  // 이전과 다를 경우 인덱스 저장 후 +1
            crd[i].first = idx;
            idx++;
        } else {  // 이전과 같을 경우 인덱스 유지
            crd[i].first = crd[i - 1].first;
        }

        prev = temp;  // 이전 값 저장
    }

    stable_sort(crd.begin(), crd.end(), compare);

    for(auto iter = crd.begin(); iter != crd.end(); iter++)
        cout << iter->first << " ";
}