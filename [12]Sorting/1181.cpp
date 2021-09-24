#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<string, int> p1, pair<string, int> p2) {
    
    // [주의] 이런 식으로 비교하는 식을 쓰면 안된다!
    // if(p1.second == p2.second && p1.first.compare(p2.first) < 0)
    //     return p1.first < p2.first;
    // else if(p1.second == p2.second && p1.first.compare(p2.first) > 0)
    //     return p1.first > p2.first;
    // else
    //     return p1.second < p2.second;

    if(p1.second == p2.second)
        return p1.first < p2.first;  // 그냥 정순이냐 역순이냐 여부, 그 이상의 기능은 안한다? (알아서 비교)
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


#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

bool compare(pair<string, int> p1, pair<string, int> p2) {
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
    
    map<string, int> m;
    string str;
    
    for(int i = 0; i < N; i++) {
        cin >> str;
        m.insert(make_pair(str, str.length()));
    }
    
    vector< pair<string, int> > words;
    
    for(auto iter = m.begin(); iter != m.end(); iter++)
        words.push_back(make_pair(iter->first, iter->second));

    sort(words.begin(), words.end(), compare);

    for(auto iter = words.begin(); iter != words.end(); iter++)
        cout << iter->first << "\n";
}

// <고민했던 점>
// 1. compare 함수 정렬 방식
// 해답 : 정순이냐 역순이냐 여부, 그 이상의 기능은 안 하는 것 같다!

// 2. 중복 값을 어떻게 처리할 것인가? (중요)
// 해답 1) map의 특성을 이용하여 중복된 값은 처음부터 제거한 후 정렬하기 ("미리 제거")
//          -> 일단 map으로 입력을 받으면 중복된 원소는 알아서 제거되고
//             제거가 모두 완료된 map을 그대로 vector에 복사하는 방식을 사용
// 특징) 시간과 메모리는 더 소요된다는 점

// 해답 2) 중복된 원소를 없애는 코드를 추가하기 ("정렬하고 제거")
//          -> 정렬을 먼저한 후, unique 함수를 사용하여 중복된 원소를 뒤로 넘긴 후에
//             erase를 통해서 완전히 지워버리기
// 특징) 정렬을 먼저하고 중복 원소를 없앤다는 점