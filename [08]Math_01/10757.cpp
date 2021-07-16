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

    for(int i = 0; i < s1 - s2; i++) { // 당연히 길이 늘어나면 length가 바뀌지
        str2 = "0" + str2;
        // 문자열의 길이를 늘리면 당연히 length도 늘어남
        // 따라서 고정되는 변수로 인덱스를 잡아주었어야 했다!
    }

    int SUM = 0;
    int overten = 0;
    vector<int> v;
    for(int i = str1.length() - 1; i >= 0; i--) {
        SUM = str1[i] - 48 + str2[i] - 48 + overten;

        if(SUM < 10) {
            v.push_back(SUM);
            overten = 0;
        } else {
            v.push_back(SUM % 10);
            overten = 1;
            if(i == 0) v.push_back(overten);
        }

    }

    for(int i = v.size() - 1; i >= 0; i--)
        printf("%d", v[i]);
    printf("\n");
}