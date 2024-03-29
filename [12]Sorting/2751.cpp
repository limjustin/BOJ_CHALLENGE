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

// 왜 Quick 정렬을 썼는데 시간초과가 발생하냐?
// Quick 정렬의 Worst Case가 뭐라고 했지? O(n^2)입니다.
// "단순히 이미 정렬이나 역정렬된 상태로만 입력이 주어져도 Quick 정렬이 감당할 수 없다"

/*
ㅇ 백준 코멘트 : 시간 복잡도가 O(nlogn)인 정렬 알고리즘으로 풀 수 있습니다.
                 예를들면 병합 정렬, 힙 정렬 등이 있지만, 지금은 내장된 정렬 함수를 쓰십시오.

ㅇ 풀이 : Quick 정렬이 제일 빠른거 아닌가? 근데 최악의 경우는 n^2이기 때문에 사용 안된다!
*/