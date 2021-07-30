#include <iostream>
using namespace std;

bool Primenum(int num) {
    if(num == 1)
        return false;

    for(int i = 2; i <= num; i++) {
        if((num % i == 0) && num != i)
            return false;
    }

    return true;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N;
    cin >> N;

    int num; int cnt = 0;

    while(N--) {
        cin >> num;
        if(Primenum(num))
            cnt++;
    }

    cout << cnt << "\n";
}

// 1000 이하니까 소수 찾기 돌려도 괜춘할 듯!!