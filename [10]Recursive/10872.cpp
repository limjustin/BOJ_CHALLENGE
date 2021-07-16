#include <cstdio>

int FACTORIAL(int n) {

    if(n == 1 || n == 0)
        return 1;
    
    else
        return n * FACTORIAL(n-1);
}

int main(void) {
    int N;
    scanf("%d", &N);

    printf("%d\n", FACTORIAL(N));
}