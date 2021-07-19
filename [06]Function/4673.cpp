#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    vector<bool> selNum(10001, true);

    for(int i = 1; i <= 10000; i++) {
        if(selNum[i])
            cout << i << "\n";
        
        int sum = 0; int num = i;

        while(num) {
            sum = sum + (num % 10);
            num = num / 10;
        }
        
        if(sum + i <= 10000)
            selNum[sum + i] = false;
    }
}

// 수를 1 ~ 10000까지 돌리면서
// 생성자를 통해 만들어진 결과는 bool 배열에서 제외시키는거지

// 에라토스테네스의 채랑 비슷한 원리!!