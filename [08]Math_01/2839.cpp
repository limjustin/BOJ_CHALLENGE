#include <iostream>
using namespace std;

int Sugar(int num) {

    bool flag = false;
    int min = num;
    
    for(int f = num / 5; f >= 0; f--) {
        for(int t = 0; t <= num / 3; t++) {
            if(5*f + 3*t == num) {
                flag = true;
                if(min > f + t)
                    min = f + t;
            }
        }
    }

    if(flag)
        return min;
    else
        return -1;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N;
    cin >> N;

    cout << Sugar(N) << "\n";
}

// 탈출 조건 1 : 안 나누어 떨어질 때 -1 출력
// 제한 조건 1 : 봉지는 최소로!! (mn 값에 넣기)