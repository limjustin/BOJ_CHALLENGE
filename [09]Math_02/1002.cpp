#include <iostream>
#include <cmath>
using namespace std;

void Turret(int x1, int y1, int r1, int x2, int y2, int r2) {
    double d = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)); // 자료형 주의

    // 가장 예외가 되는 조건은 맨 앞에 쓰도록 하자!!
    if(d == 0 && r1 == r2) // 항상 어느 조건때문에 답이 틀리는지 확인!!
        printf("%d \n", -1);
    else if(abs(r1 - r2) < d && d < r1 + r2)
        printf("%d \n", 2);
    else if(r1 + r2 == d || abs(r1 - r2) == d)
        printf("%d \n", 1);
    else
        printf("%d\n", 0);
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int testcase;
    cin >> testcase;

    int x1, y1, r1, x2, y2, r2;
    while(testcase--) {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        Turret(x1, y1, r1, x2, y2, r2);
    }
}

// 가장 예외가 되는 조건은 맨 앞으로 쓰도록 하자!!
// 조건의 배치 순서에 따라서 답이 갈린다는 점 알아두기!!