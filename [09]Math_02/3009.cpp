#include <cstdio>

int main(void) {
    int xrr[3], yrr[3];
    scanf("%d %d", &xrr[0], &yrr[0]);
    scanf("%d %d", &xrr[1], &yrr[1]);
    scanf("%d %d", &xrr[2], &yrr[2]);

    int x, y;

    if(xrr[0] == xrr[1]) {
        x = xrr[2];    
    } else if (xrr[1] == xrr[2]) {
        x = xrr[0];
    } else if (xrr[2] == xrr[0]) {
        x = xrr[1];
    }

    if(yrr[0] == yrr[1]) {
        y = yrr[2];    
    } else if (yrr[1] == yrr[2]) {
        y = yrr[0];
    } else if (yrr[2] == yrr[0]) {
        y = yrr[1];
    }

    printf("%d %d \n", x, y);
}