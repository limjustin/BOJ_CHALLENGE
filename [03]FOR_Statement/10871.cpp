#include <cstdio>

int main(void) {
    int N, X;
    scanf("%d %d", &N, &X);

    int num;
    while(N-- > 0) {
        scanf("%d", &num);
        if(X > num) printf("%d ", num);
    }
}