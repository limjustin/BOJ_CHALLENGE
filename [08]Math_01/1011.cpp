#include <cstdio>

int s, e;
int cnt = 0;

int Centauri(int len, int location) {

    // printf("Centauri(%d, %d) \n", len, location);
    
    if(location == e-1 && (len == 1 || len == 2)) {
        return 1;
    } else if(location > e-1) {
        return 0;
    } else {
        if(Centauri(len+1, location+len+1)) {
            cnt++;
            return 1;
        } else if(Centauri(len, location+len)) {
            cnt++;
            return 1;
        } else if(Centauri(len-1, location+len-1)) {
            cnt++;
            return 1;
        }
        return 0;
    }

    return cnt;
}

int main(void) {
    int testcase;
    scanf("%d", &testcase);

    while(testcase--) {
        scanf("%d %d", &s, &e);
        if(e - s == 1) {
            printf("%d \n", 1);
        }
        else if(Centauri(1, s+1)) {
            printf("%d \n", cnt + 2);
        }
        cnt=0;
    }
}