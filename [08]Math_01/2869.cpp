#include <cstdio>
#include <cmath>

int main(void) {
    int A, B, V;
    scanf("%d %d %d", &A, &B, &V);
    printf("%d \n", (int)ceil((double)(V-A)/(A-B)) + 1);
}

// 나눌 때는 자료형 꼭 신경쓰기!!
// 1억까지 for문?? 이거는 좀 수식으로 풀 수 없는가 생각해보기!!
// 아니면 시간초과 나잖아~~