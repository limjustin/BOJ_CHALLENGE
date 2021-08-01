#include <iostream>
#include <algorithm>
using namespace std;

void Pitagoras(int a, int b, int c) {
    if(a*a + b*b == c*c)
        cout << "right" << "\n";
    else
        cout << "wrong" << "\n";
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    int mx = 0; int tmp;
    while(a != 0 && b != 0 && c != 0) {
        if(a > b) {
            mx = max(a, c);
            tmp = min(a, c);
            Pitagoras(tmp, b, mx);
        }
        else {
            mx = max(b, c);
            tmp = min(b, c);
            Pitagoras(tmp, a, mx);
        }
        cin >> a >> b >> c;
    }
}