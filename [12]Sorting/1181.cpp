#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool compare(pair<string, int> p1, pair<string, int> p2) {
    
    // if(p1.second == p2.second && p1.first.compare(p2.first) < 0)
    //     return p1.first < p2.first;
    // else if(p1.second == p2.second && p1.first.compare(p2.first) > 0)
    //     return p1.first > p2.first;
    // else
    //     return p1.second < p2.second;

    if(p1.second == p2.second)
        return p1.first < p2.first;  // 그냥 정순이냐 역순이냐 여부, 그 이상의 기능은 안한다?
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
        words.push_back(make_pair(str, str.length()));
    }

    sort(words.begin(), words.end(), compare);
    words.erase(unique(words.begin(), words.end()), words.end());
    // unique 함수의 특성
    // 정렬되지 않은 상태에서 함수를 사용하게 되면 아무런 변화가 없다.
    // 연속된 중복 원소를 vector의 제일 뒷부분으로 보낸다. (쓰레기 값으로 처리)
    // unique 함수가 반환하는 값은 쓰레기 값들의 가장 첫 번째 원소
    // 따라서 중복된 값을 가진 원소들은 삭제된다!

    for(auto iter = words.begin(); iter != words.end(); iter++)
        cout << iter->first << "\n";
}

// 1. compare 함수 내부 정의
// 2. 중복 값을 어떻게 처리
    // 처음 입력할 때 부터 (중복은 허용 X) 특성을 이용하여 입력받기 (map의 특성 이용)
    // 중간에 없애는 코드를 하나 추가할지 (but how?) (완)