#include <cstdio>

int PITA(int a, int b, int c) {
    if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
        return 1;

    return 0;
}

int main(void) {
    int a, b, c;
    while (scanf("%d %d %d", &a, &b, &c)) {
        if(a == 0 && b == 0 && c == 0)
            break;
        if(PITA(a,b,c)) printf("right \n");
        else printf("wrong \n");
    }
}