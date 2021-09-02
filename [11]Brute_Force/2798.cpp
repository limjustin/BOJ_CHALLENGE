#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    int tmp; vector<int> card;
    for(int i = 0; i < N; i++) {
        cin >> tmp;
        card.push_back(tmp);
    }

    int mx = 0;
    for(int i = 0; i < N - 2; i++) {
        for(int j = i + 1; j < N - 1; j++) {
            for(int k = j + 1; k < N; k++) {
                if(mx < card[i] + card[j] + card[k] && card[i] + card[j] + card[k] <= M)
                    mx = card[i] + card[j] + card[k];
            }
        }
    }

    cout << mx << "\n";
}