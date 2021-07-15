#include <cstdio>
#include <vector>
#define MAX 123456*2
using namespace std;

int main(void) {
    int n;
    vector<bool> num(MAX + 1, true);
    num[1] = false;

    for(int i = 2; i <= MAX; i++) {
        if(num[i])
            for(int k = 2; k <= MAX/i; k++) {
                num[k * i] = false;
            }
    }

    while(1) {
        scanf("%d", &n);

        if(n == 0)
            break;

        int cnt = 0;

        for(int i = n + 1; i <= 2*n; i++) {
            if(num[i] == true)
                cnt++;
        }

        printf("%d \n", cnt);
    }
}