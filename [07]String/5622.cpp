#include <iostream>
#include <string>
using namespace std;

int DIAL(char a) {
    int sec;

    if(a == 'A' || a == 'B' || a == 'C')
        sec = 2;
    else if(a == 'D' || a == 'E' || a == 'F')
        sec = 3;    
    else if(a == 'G' || a == 'H' || a == 'I')
        sec = 4;
    else if(a == 'J' || a == 'K' || a == 'L')
        sec = 5;
    else if(a == 'M' || a == 'N' || a == 'O')
        sec = 6;
    else if(a == 'P' || a == 'Q' || a == 'R' || a == 'S')
        sec = 7;
    else if(a == 'T' || a == 'U' || a == 'V')
        sec = 8;
    else if(a == 'W' || a == 'X' || a == 'Y' || a == 'Z')
        sec = 9;

    return sec;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string dial;
    cin >> dial;

    int sum = 0;
    for(int i = 0; i < dial.length(); i++)
        sum += DIAL(dial.at(i));

    cout << sum + dial.length() << "\n";
}