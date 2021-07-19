#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string word;
    cin >> word;

    vector<int> ALPHABET(26, 0);

    for(int i = 0; i < word.length(); i++) {
        if((int)word.at(i) >= 65 && (int)word.at(i) <= 90)
            word.at(i) = word.at(i) + 32;

        ALPHABET[word.at(i) - 97]++;
    }

    int mx = 0; int idx = 0;
    bool isSame = false;
    for(int i = 0; i < ALPHABET.size(); i++) {
        if(ALPHABET[i] > mx) {
            mx = ALPHABET[i];
            idx = i;
            isSame = false;
        } else if(ALPHABET[i] == mx) { // 같으면
            isSame = true; // 일단 겹치는 것이 있다고 가정
        }
    }

    if(isSame) {
        cout << "? \n";
    } else {
        cout << (char)(idx + 65) << "\n";
    }
}