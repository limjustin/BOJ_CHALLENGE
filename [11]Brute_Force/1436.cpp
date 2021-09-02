#include <iostream>
#include <vector>
using namespace std;

vector<int> res;

void makeTripleSix() {
    int cnt = 0; int tmp;

    for(int num = 666; cnt <= 10000; num++) {
        tmp = num;

        while(num >= 666) {
            if(num % 1000 == 666) {
                res.push_back(tmp);
                cnt++;
            } else {
                num = num / 10;
            }
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    makeTripleSix();

    int N;
    cin >> N;

    cout << res[N] << "\n";
}