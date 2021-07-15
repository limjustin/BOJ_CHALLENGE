#include <cstdio>
#include <vector>
#define MAX 1000001
using namespace std;

int main(void) {
    int M, N;
    scanf("%d %d", &M, &N);

    vector<bool> num(MAX, true);
    
    for(int A = 2; A <= N; A++) {
        if(num[A])
            for(int i = 2; i < MAX / A; i++) {
                num[i * A] = false;
            }
    }

    for(int i = M; i <= N; i++) {
        if(num[i] && i != 1)
            printf("%d \n", i);
    }
}
/*
<매우 고전했던 문제>
- 실수 : 분명히 for문을 두 번 돌리면 안되는 시간복잡도였거든... (시간 초과)
    ㄴ 에라토스 만들어놓고 또 소수 판별 알고리즘 돌려서 시간 초과 만들어 냈다!

- 해결 : 소수 판별 알고리즘을 사용하지 않고도 소수를 판별할 수 있었다! (에라토스테네스의 채)
    ㄴ 일단 한번 걸러서 소수만 남겨두고, 해당 범위 내에 해당하는 소수들만 뽑아내면 되었다!

- 결론 : 이 알고리즘을 꼭 써야 되었다는 강박관념 버리기
*/