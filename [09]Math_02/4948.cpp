#include <iostream>
#include <vector>
#define MAX 123456
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    vector<bool> eratos(MAX*2 + 1, true);
    eratos[1] = false;

    for(int num = 2; num <= (MAX*2 + 1); num++) {
        if(!eratos[num])
            continue;
        
        for(int idx = 2; idx <= (MAX*2 + 1) / num; idx++) {
            eratos[num * idx] = false;
        }
    }

    int n; int cnt;
    cin >> n;
    
    while(n) {
        cnt = 0;

        for(int i = n + 1; i <= 2*n; i++) {
            if(eratos[i])
                cnt++;
        }
        cout << cnt << "\n";

        cin >> n;
    }
    
}


// 소수 개수가 123,456 보다 넘는 것도 세야한다는 말임!