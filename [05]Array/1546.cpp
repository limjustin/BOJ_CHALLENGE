#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N;
    cin >> N;

    double score; int mx = 0;
    vector<double> res;

    for(int i = 0; i < N; i++) {
        cin >> score;
        res.push_back(score);

        if(score > mx)
            mx = score;
    }

    // 자료형 체크!!
    double sum = 0;
    for(int i = 0; i < N; i++) {
        res[i] = res[i] / mx * 100;
        sum += res[i];
    }

    printf("%.2f \n", sum / N);
}