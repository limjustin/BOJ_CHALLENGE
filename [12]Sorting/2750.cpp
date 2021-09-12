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

/*
ㅇ 백준 코멘트 : 시간 복잡도가 O(n^2)인 알고리즘으로 풀 수 있습니다.
                 예를들면 삽입 정렬, 거품 정렬 등이 있습니다.

ㅇ 풀이 : 최대 원소 수가 1000개이고, n^2 시켜도 1,000,000이므로 1초 안으로 들어감.
          따라서 n^2 알고리즘 사용 가능!
*/