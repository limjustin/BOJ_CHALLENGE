#include <cstdio>

void printStars() {
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

void printStar() {
    for(int line = 1; line <= 3; line++) {
        for(int star = 1; star <= 3; star++) {
            if(line == 2 && star == 2) {
                printf(" ");
                continue;
            }
            printStars();
        }
        printf("\n");
    }
}

void THREESTAR(int n) {
    
}

int main(void) {
    printStar();
}

// // 일단 별을 전문적으로 찍는 함수 하나 있어야 할 듯
// 111
// 101
// 111
// // 재귀함수로 찍기
// 27 -> 9 짜리를 9개 -> 3 짜리를 9개

// 3은 1짜리를 9개 찍는 것 (가운데는 비우고 1x1)
// 9는 3짜리를 9개 찍는 것 (가운데는 비우고 3x3)
// 27은 9짜리를 9개 찍는 것 (가운데는 비우고 9x9)

// 1,3줄 같고, 2줄 다름
// 1, 3, 7, 9줄 같고 2,8 줄 같

*********
* ** ** *
*********
***   ***
* *   * *
***   ***
*********
* ** ** *
*********
3/3번...
3
2
3
*** : 3개찍냐
* * : 2개찍냐
***
차이로 볼 수 있네
<3일때는 이거한번>
    for(int i = 0; i < n/3; i++) {
        3을 찍어
    }
    
    for(int i = 0; i < n/3; i++) {
        2를 찍어
    }

    for(int i = 0; i < n/3; i++) {
        3을 찍어
    }

<9일때는 3인거를 3번>


    for(int i = 0; i < n/3; i++) {
        3을 찍어
    }
    
    for(int i = 0; i < n/3; i++) {
        2를 찍어
    }

    for(int i = 0; i < n/3; i++) {
        3을 찍어
    }

    for(int i = 0; i < n/3; i++) {
        (if i = n/6 + 1) print(" ");
        3을 찍어
    }
    
    for(int i = 0; i < n/3; i++) {
        2를 찍어
    }

    for(int i = 0; i < n/3; i++) {
        3을 찍어
    }

9/3번..
3 3 3
2 2 2
3 3 3

3 0 3
2 0 2
3 0 3

3 3 3
2 2 2
3 3 3

27/3번..
3 3 3 3 3 3 3 3 3
2 2 2 2 2 2 2 2 2
3 3 3 3 3 3 3 3 3

3 0 3 3 0 3 3 0 3
2 0 2 2 0 2 2 0 2
3 0 3 3 0 3 3 0 3

3 3 3 3 3 3 3 3 3
2 2 2 2 2 2 2 2 2
3 3 3 3 3 3 3 3 3

3 3 3 0 0 0 3 3 3
2 2 2 0 0 0 2 2 2
3 3 3 0 0 0 3 3 3

3 0 3
2 0 2
3 0 3

3 3 3 0 0 0 3 3 3
2 2 2 0 0 0 2 2 2
3 3 3 0 0 0 3 3 3
