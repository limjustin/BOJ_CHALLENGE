#include <cstdio>

int main(void) {
    int num;
    scanf("%d", &num);

    int real = num;

    int fn, bn;
    int cnt = 0;

    do {
        cnt++;

        fn = num / 10;
        bn = num % 10;

        num = bn*10 + (fn+bn)%10;

    } while(bn*10 + (fn+bn)%10 != real);

    printf("%d", cnt);
}