#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N, num;
    cin >> N;

    int mx = -1000001;
    int mn = 1000001;
    while(N--) {
        cin >> num;
        
        if(num > mx)
            mx = num;
        if(num < mn)
            mn = num;
    }

    cout << mn << " " << mx << "\n";
}