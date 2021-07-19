#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string sentence;
    getline(cin, sentence);

    int cnt = 0;

    for(int i = 0; i < sentence.length(); i++) {
        if((i == 0 || i == sentence.length() - 1) && sentence.at(i) == ' ')
            continue;

        else if(sentence.at(i) == ' ')
            cnt++;
    }

    if(sentence.length() == 1 && sentence == " ")
        cout << 0 << "\n";
    else
        cout << cnt + 1 << "\n";
}