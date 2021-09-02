#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N;
    cin >> N;

    int data[50][2];  // 덩치 데이터 배열
    for(int i = 0; i < N; i++) {
        cin >> data[i][0] >> data[i][1];
    }

    vector<int> res(N, 0);
    for(int A = 0; A < N; A++) {  // 메인
        for(int B = 0; B < N; B++) {  // 비교되는 상대
            if(A == B)
                continue;

            // 지는 경우에만 카운트
            if(data[A][0] < data[B][0] && data[A][1] < data[B][1])  // 조건 똑바로 보기
                res[A]++;    
        }
    }

    for(int i = 0; i < N; i++) {
        cout << res[i] + 1 << " ";
    }
}

/*
<처음에 고려하지 못했던 점>
- 고민 : '차등'을 어떻게 둘 것인가
- 실수 : 임의대로 점수를 부여하고 공식으로 만들어서 풀이
        (점수에서 빼려다보니 예외가 생길 수도 있기 때문)
- 해결 : 제대로 점수를 구하고 순위를 올바른 방식으로 구하는 풀이
         "번뜩이는 아이디어도 좋지만, 정석적인 방법을 효율적으로 구현하는 것이 더 좋을 수도 있다."
*/