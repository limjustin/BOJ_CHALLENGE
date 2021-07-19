#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string S;
    cin >> S;

    vector<int> ALPHABET(26, -1);

    for(int i = 0; i < S.length(); i++) {
        if(ALPHABET[S.at(i) - 97] == -1)
            ALPHABET[S.at(i) - 97] = i;
    }

    for(int i = 0; i < ALPHABET.size(); i++)
        cout << ALPHABET[i] << " ";
}