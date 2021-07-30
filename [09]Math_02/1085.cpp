#include <cstdio>

int main(void) {
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);

    int mw; int mh;
    if(w - x > x)
        mw = x;
    else
        mw = w - x;

    if(h - y > y)
        mh = y;
    else
        mh = h - y;

    (mw > mh) ? printf("%d \n", mh) : printf("%d \n", mw);
}