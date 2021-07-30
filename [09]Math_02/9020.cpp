#include <iostream>
#include <vector>
#define MAX 10000 // 거꾸로 다시 올라가니까 5000보다 크지!
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    vector<bool> eratos(MAX + 1, true);
    eratos[1] = false;

    for(int num = 2; num <= MAX + 1; num++) {
        if(eratos[num]) {
            for(int idx = 2; idx <= (MAX + 1) / num; idx++)
                eratos[num * idx] = false;
        }
    }

    int testcase; int n;
    cin >> testcase;

    while(testcase--) {
        cin >> n;

        for(int pt = n/2; pt >= 2; pt--) {
            if(eratos[pt] && eratos[n - pt]) {
                cout << pt << " " << n - pt << "\n";
                break;
            }
        }

    }
}

// 절반부터 시작하면 될 듯?