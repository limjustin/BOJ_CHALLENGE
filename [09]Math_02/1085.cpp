#include <cstdio>

int main(void) {
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);

    int mx, my;
    if(h - y <= y) {
        my = h - y;
    } else {
        my = y;
    }

    if(w - x <= x) {
        mx = w - x;
    } else {
        mx = x;
    }

    (mx < my) ? printf("%d \n", mx) : printf("%d \n", my);

}

// 상하좌우 거리를 다 구한다음에 짧은 쪽으로!