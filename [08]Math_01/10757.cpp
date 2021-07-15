#include <iostream>
#include <string>
#include <vector>
using namespace std;

string str1;
string str2;

void SWAP(string s1, string s2) {
    string temp;
    temp = s1;
    s1 = s2;
    s2 = temp;

    str1 = s1;
    str2 = s2;
}


int main(void) {

    cin >> str1 >> str2;

    if(str1.length() < str2.length())
        SWAP(str1, str2);

    // 이걸 생각 못했네
    int s1 = str1.length();
    int s2 = str2.length();

    cout << str1 << str1.length() <<  "\n";
    cout << str2 << str2.length() << "\n";

    for(int i = 0; i < s1 - s2; i++) { // 당연히 길이 늘어나면 length가 바뀌지 ㅋㅋㅋ
        str2 += "0";
    }

    cout << str1 << "\n";
    cout << str2 << "\n";

}