// #include <iostream>
// #include <vector>
// // #define MAX 6561
// using namespace std;

// void Recursivestar(int N) {

//     for(int i = 0; i < N; i++) {

//     }

//     // 지정된 수가 저장된 배열을 돌려서 그 좌표에 해당하는 구역에 * 대신 공백을 찍는 것이지!!
//     for(int x = 0; x < N; x++) { // 

//         for(int y = 0; y < N; y++) { // y 좌표

//         }

//     }
// }

// int main(void) {
//     // ios_base::sync_with_stdio(false);
//     // cin.tie(NULL); cout.tie(NULL);

//     // 3의 배수 N 입력 받기
//     int N;
//     cin >> N;

//     vector< vector<char> > allStar;
//     vector<char> v;

//     for(int x = 0; x < N; x++) {
//         for(int y = 0; y < N; y++) {
//             v.push_back('*');
//         }
//         allStar.push_back(v);
//     }

//     // 함수 결과 출력
//     Recursivestar(N);
// }

// ***
// * * (1,1)
// ***

// *********
// * ** ** * (1,1) (1,4) (1,7)
// *********
// ***   *** (3,3) (3,4) (3,5)
// * *   * * (4,3) (4,4) (4,5) (4,1) (4,7)
// ***   *** (5,3) (5,4) (5,5)
// *********
// * ** ** * (7,1) (7,4) (7,7)
// *********

// 둘 다 3으로 나누었을 때 나머지가 1인 수들이면 된다!!
// 9로 갔을 때는 n = n / 3을 진행해야 한다!!

// 아니면 숫자를 기억하게 하는거지 (1,3,4,5,7 등)
// 그 숫자만 for문을 돌면 되구나! (일단 다 별을 박아두고!!)

#include <cstdio>

void Recursivestar(int x, int y, int num) {

    // 공백 출력 상황
    if((x/num)%3 == 1 && (y/num)%3 == 1)
        printf(" ");
    
    // 별 출력 상황
    else {
        if ((x/num) == 0 || (y/num) == 0)
            printf("*");
        else  // 어떻게든 끝까지 따라가서 나누어야 했네
            Recursivestar(x, y, num*3);
    }
}

int main(void) {
    int num;
    scanf("%d", &num);

    for(int x = 0; x < num; x++) {
        for(int y = 0; y < num; y++) {
            Recursivestar(x, y, 1);
        }
        printf("\n");
    }
}