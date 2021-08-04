#include <cstdio>
int cnt = 0;

void move(int num, int start, int to) {
    printf("%d %d \n", start, to);
    cnt++;
}

void Hanoi(int num, int start, int to, int via) {
    if(num == 1)
        move(1, start, to);

    else {
        Hanoi(num - 1, start, via, to);
        move(num, start, to);
        Hanoi(num - 1, via, to, start);
    }

    printf("%c \n", cnt);
}

int main(void) {
    int num;
    scanf("%d", &num);

    Hanoi(num, 1, 2, 3);
}