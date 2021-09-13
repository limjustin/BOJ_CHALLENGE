#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool compare(const pair<string, int> p1, const pair<string, int> p2) {

    if(p1.second == p2.second && p1.first.compare(p2.first) < 0)
        return p1.first < p2.first;

    else if(p1.second == p2.second && p1.first.compare(p2.first) > 0)
        return p1.first > p2.first;    
        
    else
        return p1.second < p2.second;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    string str;
    vector< pair<string, int> > words;

    for(int i = 0; i < N; i++) {
        cin >> str;
        words.push_back({str, str.length()}); // key가 중복되지 않게
    }

    // cout << "Before Sort \n";
    // for(auto iter = words.begin(); iter != words.end(); iter++)
    //     cout << iter->first << "\n";

    // 내 방법
    // 1. 일단 문자열 비교를 하고 싶은데...

    sort(words.begin(), words.end(), compare);

    // words.erase(unique(words.begin(), words.end()), words.end());

    cout << "After Sort \n";
    for(auto iter = words.begin(); iter != words.end(); iter++)
        cout << iter->first << "\n";
}

// 문자열 비교하기 (compare 함수)

// vector에서 중복원소 제거하기

// stable_sort가 뭔데?