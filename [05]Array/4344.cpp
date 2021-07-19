#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int testcase;
    cin >> testcase;

    while(testcase--) {
        int student;
        cin >> student;

        int sum = 0; int s;
        vector<int> score;
        for(int i = 0; i < student; i++) {
            cin >> s;
            score.push_back(s);

            sum += s;
        }

        int cnt = 0;
        for(int i = 0; i < score.size(); i++) {
            if(score[i] > sum / student)
                cnt++;
        }

        printf("%.3f%% \n", (double)cnt / student * 100);

    }
}