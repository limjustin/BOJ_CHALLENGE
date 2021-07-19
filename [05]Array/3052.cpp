#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int num; int cnt = 0;
    vector<bool> v(42, false);
    
    for(int i = 0; i < 10; i++) {
        cin >> num;

        if(!v[num % 42]) {
            v[num % 42] = true;
        }
    }

    for(int i = 0; i < 42; i++) {
        if(v[i])
            cnt++;
    }

    cout << cnt << "\n";
}

// 나머지 구하고 0보다 크면 카운트 안하고 continue