#include <iostream>
using namespace std;

void print3Star() {
    printf("***");
}

void print2Star() {
    printf("* *");
}

void printStar(int n) {

    for(int i = 1; i <= n/3; i++) {

        for(int j = 1; j <= n/3; j++) {
            if((i > n/9 && i <= 2*n/9) && (j > n/9 && j <= 2*n/9)) {
                printf("   ");
            } else {
                print3Star();
            }
        }

        printf("\n");

        for(int k = 1; k <= n/3; k++) {
            if((i > n/9 && i <= 2*n/9) && (k > n/9 && k <= 2*n/9)) {
                printf("   ");
            } else {
                print2Star();
            }
        }

        printf("\n");

        for(int l = 1; l <= n/3; l++) {
            if((i > n/9 && i <= 2*n/9) && (l > n/9 && l <= 2*n/9)) {
                printf("   ");
            } else {
                print3Star();
            }   
        }

        printf("\n");
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    printStar(27);
}