#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<int, string> p1, pair<int, string> p2) {
    if(p1.first == p2.first)
        continue;
    else
        return p1.first < p2.first;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    int age; string name;
    vector< pair<int, string> > db;

    for(int i = 0; i < N; i++) {
        cin >> age >> name;
        db.push_back(make_pair(age, name));
    }

    stable_sort(db.begin(), db.end(), compare);

    for(auto iter = db.begin(); iter != db.end(); iter++)
        cout << iter->first << " " << iter->second << "\n";
}

// stable sort를 어떻게 구현할까?
// 해결 1) stable_sort 함수 사용
//         -> 이미 만들어진 STL이므로 사용하는 것을 추천!
// 해결 2) 직접 구현하기
//         -> ((age, name), index) 같은 방식으로 인덱스를 주어서 정렬하게 할 수도 있을듯!