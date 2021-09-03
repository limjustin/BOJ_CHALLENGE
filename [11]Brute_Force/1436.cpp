#include <iostream>
#include <vector>
using namespace std;

vector<int> res;

void makeTripleSix() {
    int cnt = 0; int tmp; 

    for(int num = 666; cnt <= 10000; num++) {
        tmp = num;

        while(tmp >= 666) {
            if(tmp % 1000 == 666) {
                res.push_back(num);
                cnt++;
                break;
            } else {
                tmp = tmp / 10;
            }
        }
    }
    
}

int main(void) {
    int N;
    cin >> N;

    makeTripleSix();

    cout << res[N - 1] << "\n";  // 실수 좀 줄이자
}