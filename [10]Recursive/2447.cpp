#include <cstdio>

void printStar() {
    for(int line = 1; line <= 3; line++) {
        for(int star = 1; star <= 3; star++) {
            if(line == 2 && star == 2) {
                printf(" ");
                continue;
            }
            printf("*");
        }
        printf("\n");
    }
}

int THREESTAR(int n) {
    if(n == 3)
        printStar();
    
    else
        return THREESTAR(n/3);
}

int main(void) {
    THREESTAR(27);
}

// // 일단 별을 전문적으로 찍는 함수 하나 있어야 할 듯
// 111
// 101
// 111
// // 재귀함수로 찍기
// 27 -> 9 짜리를 9개 -> 3 짜리를 9개