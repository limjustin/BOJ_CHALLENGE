#include <cstdio>

int main(void) {
    int num;
    scanf("%d", &num);
    
    int sum = 0;
    while(num > 0)
        sum += (num--);
    
    printf("%d \n", sum);
}