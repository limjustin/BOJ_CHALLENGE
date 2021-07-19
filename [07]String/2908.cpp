#include <iostream>
using namespace std;

int SWAP(int num) {
    int a = num % 10;
    num = num / 10;
    int b = num % 10;
    num = num / 10;
    int c = num;

    int temp;
    temp = a;
    a = c;
    c = temp;

    return c*100 + b*10 + a;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int A, B;
    cin >> A >> B;

    int swapA = SWAP(A);
    int swapB = SWAP(B);

    if(swapA > swapB ) {
        cout << swapA << "\n";
    } else {
        cout << swapB << "\n";
    }
}