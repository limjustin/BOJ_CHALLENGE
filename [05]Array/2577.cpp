#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int A, B, C, result;
    cin >> A >> B >> C;
    result = A * B * C;

    vector<int> v(10, 0);

    while(result) {
        v[result%10]++;
        result = result / 10;
    }

    for(int i = 0; i <= 9; i++)
        cout << v[i] << "\n";
}