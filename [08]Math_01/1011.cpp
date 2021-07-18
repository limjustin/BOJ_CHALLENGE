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

// int total = 4
// for(int i = 3; num < 2^31; i++) {
//     total += 2*i;
//     if(num > total) printf("%d \n", 2*(i-1) );
// }

#include <cstdio>
#include <cmath>

void Centauri(int s, int e) {

    int num = e - s - 2;
    int total = 4;
    for(int i = 3; num < (int)pow(2, 31); i++) {
        printf("log");
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
                printf("%d \n", (2*i) - 1);
                break;
            } else {
                printf("%d \n", 2*i);
                break;
            }
        }
    }

}

int main(void) {

    int testcase;
    scanf("%d", &testcase);

    int s, e;
    while(testcase--) {
        scanf("%d %d", &s, &e);
        Centauri(s, e);
    }

}