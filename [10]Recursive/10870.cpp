#include <cstdio>

int FIBO(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return FIBO(n-1) + FIBO(n-2);
}

int main(void) {
    int n;
    scanf("%d", &n);
    
    printf("%d \n", FIBO(n));
}