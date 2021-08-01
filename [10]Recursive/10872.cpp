#include <iostream>
using namespace std;

int Factorial(int n) {
    if(n <= 1)
        return 1;
    else
        return n * Factorial(n - 1);
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int num;
    cin >> num;
    cout << Factorial(num) << "\n";
}