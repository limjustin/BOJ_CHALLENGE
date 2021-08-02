#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    // 숫자 입력받기
    string A, B;
    cin >> A >> B;

    // 적은 수 앞에 0을 채워넣기
    int lenA = A.length();
    int lenB = B.length();
    int lenTotal;

    if(lenA > lenB) { // B가 적은 경우
        for(int i = 0; i < lenA - lenB; i++)
            B = "0" + B;
        lenTotal = lenA;
    } else { // A가 적은 경우
        for(int i = 0; i < lenB - lenA; i++)
            A = "0" + A;
        lenTotal = lenB;
    }

    // 두 수를 더하기 (48을 빼면 된다)
    int upTen = 0;
    vector<int> result;

    for(int i = lenTotal - 1; i >= 0; i--) {
        result.push_back(((A[i] - 48) + (B[i] - 48) + upTen) % 10);
        
        if(i == 0 && ((A[i] - 48) + (B[i] - 48) + upTen) >= 10) {
            result.push_back(1);
        } else if(((A[i] - 48) + (B[i] - 48) + upTen) >= 10) {
            upTen = 1;
        } else if(((A[i] - 48) + (B[i] - 48) + upTen) < 10) {
            upTen = 0;
        }
    }

    for(int i = result.size() - 1; i >= 0; i--) {
        cout << result[i];
    }
}

// 둘 다 string 형식으로 받아야 함
// 적은 수 앞에 0을 채워넣어주어야 함
// 맨 뒤의 인덱스부터 더하면 됨
// (단, 10을 넘어가면 다음 수에 1 더해주는 것까지)