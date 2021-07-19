#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int testcase;
    cin >> testcase;

    string quiz;
    while(testcase--) {
        cin >> quiz;

        int weight = 0; int result = 0;

        for(int i = 0; i < quiz.length(); i++) {
            if(quiz.at(i) == 'O') {
                result += (1 + weight);
                weight++;
            } else if(quiz.at(i) == 'X') {
                weight = 0;
            }
        }

        cout << result << "\n";
    }
}

// X가 나오면 바로 가중치 0으로 줄이고
// O가 나오면 가중치 +1씩해서 바로 더하고