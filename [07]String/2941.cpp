#include <iostream>
#include <string>
using namespace std;

int Croatia(string str) {
    int cnt = 0;

    for(int i = 0; i < str.length(); i++) {
        cnt++;
        
        if(i != 0 && str.at(i) == '=') {
            if(i != 1 && str.at(i - 2) == 'd' && str.at(i - 1) == 'z')
                cnt -= 2;
            else if(str.at(i - 1) == 'c' || str.at(i - 1) == 's' || str.at(i - 1) == 'z')
                cnt -= 1;

        } else if(i != 0 && str.at(i) == '-') {
            if(str.at(i - 1) == 'c' || str.at(i - 1) == 'd')
                cnt -= 1;

        } else if(i != 0 && str.at(i) == 'j') {
            if(str.at(i - 1) == 'l' || str.at(i - 1) == 'n')
                cnt -= 1;
        }
    }

    return cnt;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string str;
    cin >> str;

    cout << Croatia(str) << "\n";
}