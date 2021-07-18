#include <cstdio>
#include <cmath>

void Centauri(int s, int e) {

    long long num = e - s - 2;
    long long total = 4;
    for(long long i = 3; num < pow(2, 31); i++) {
        if(num == 1 || num == 2) {
            printf("%d \n", 3);
            break;
        } else if(num == 3 || num == 4) {
            printf("%d \n", 4);
            break;
        } else if (num == 0) {
            printf("%d \n", 2);
            break;
        } else if (num == -1) {
            printf("%d \n", 1);
            break;            
        }
        total += 2*i;
        if(num <= total) {
            if((total - 2*i + total)/2 >= num) {
                printf("%lld \n", (2*i) - 1);
                break;
            } else {
                printf("%lld \n", 2*i);
                break;
            }
        }
    }

}

int main(void) {

    int testcase;
    scanf("%d", &testcase);

    long long s, e;
    while(testcase--) {
        scanf("%lld %lld", &s, &e);
        Centauri(s, e);

    }

}

/*
시간 초과되는 문제들, 방정식이나 수열로 풀면 풀림
그니까 수학으로 풀라는 뜻임
상식적으로 2^31 되는 문제들을 어떻게 재귀로 돌릴 생각을 했음
대부분 규칙이 있을 것이라고 생각하고 접근?!

점화식으로 코드 짜는 연습도 해야할듯
점화식 구하는 방법도 공부하고 (예전 수학?)

*/

// #include <cstdio>

// int s, e;
// int cnt = 0;

// int Centauri(int len, int location) {

//     // printf("Centauri(%d, %d) \n", len, location);
    
//     if(location == e-1 && (len == 1 || len == 2)) {
//         return 1;
//     } else if(location > e-1) {
//         return 0;
//     } else {
//         if(Centauri(len+1, location+len+1)) {
//             cnt++;
//             return 1;
//         } else if(Centauri(len, location+len)) {
//             cnt++;
//             return 1;
//         } else if(Centauri(len-1, location+len-1)) {
//             cnt++;
//             return 1;
//         }
//         return 0;
//     }

//     return cnt;
// }

// int main(void) {
//     int testcase;
//     scanf("%d", &testcase);

//     while(testcase--) {
//         scanf("%d %d", &s, &e);
//         if(e - s == 1) {
//             printf("%d \n", 1);
//         }
//         else if(Centauri(1, s+1)) {
//             printf("%d \n", cnt + 2);
//         }
//         cnt=0;
//     }
// }