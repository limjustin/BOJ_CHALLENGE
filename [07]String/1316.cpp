#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int testcase; 
    cin >> testcase;

    string word; int nongroup = 0;
    
    for(int j = 0; j < testcase; j++) {
        cin >> word;
        vector<bool> GROUPWORD(26, false);

        for(int i = 0; i < word.length(); i++) {
            if(GROUPWORD[word.at(i) - 97] && i != 1) {
                if(word.at(i) != word.at(i - 1)) {
                    nongroup++;
                    break;
                }
                else
                    continue;
            } else {
                GROUPWORD[word.at(i) - 97] = true;
            }
        }
        
    }

    cout << testcase - nongroup << "\n";
}

// 이전이랑 다른데(중요) 똑같은 문자가 인식되면