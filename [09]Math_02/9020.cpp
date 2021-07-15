#include <cstdio>
#include <vector>
#define MAX 10000
using namespace std;

int main(void) {
    vector<bool> num(MAX + 1, true);
    num[1] = false;

    for(int i = 2; i <= MAX; i++)
        if(num[i])
            for(int k = 2; k <= MAX/i; k++)
                num[k * i] = false;

    int N;
    scanf("%d", &N);

    while(N--) {
        int n;
        scanf("%d", &n);

        for(int i = n/2; i > 1; i--) {
            if(num[i] && num[n - i]) {
                printf("%d %d \n", i , n-i);
                break;
            }
        }
    }

}