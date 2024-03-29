#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int PaintBLACK(char arr[][51], int n, int m) {  // 2차원 배열을 매개변수로 고려 X
    int cnt = 0;

    char chess[8][9] = {"BWBWBWBW",  // null 문자 고려 X
                        "WBWBWBWB",
                        "BWBWBWBW",
                        "WBWBWBWB",
                        "BWBWBWBW",
                        "WBWBWBWB",
                        "BWBWBWBW",
                        "WBWBWBWB"};

    for(int height = 0; height < 8; height++) {
        for(int width = 0; width < 8; width++) {
            if(chess[height][width] != arr[height + n][width + m])
                cnt++;
        }
    }

    return cnt;
}

int PaintWHITE(char arr[][51], int n, int m) {
    int cnt = 0;

    char chess[8][9] = {"WBWBWBWB",
                        "BWBWBWBW",
                        "WBWBWBWB",
                        "BWBWBWBW",
                        "WBWBWBWB",
                        "BWBWBWBW",
                        "WBWBWBWB",
                        "BWBWBWBW"};

    for(int height = 0; height < 8; height++) {
        for(int width = 0; width < 8; width++) {
            if(chess[height][width] != arr[height + n][width + m])
                cnt++;
        }
    }

    return cnt;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    char arr[51][51];
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> arr[i][j];
        }
    }

    vector<int> res;
    for(int n = 0; n <= N - 8; n++) {
        for(int m = 0; m <= M - 8; m++) {
                // if로 케이스 나누지 말고 둘 다 들어가야함
                // 반례) 첫 칸만 잘못 색칠이고 나머지는 잘 색칠일 수 있음
                res.push_back(PaintBLACK(arr, n, m));
                res.push_back(PaintWHITE(arr, n, m));
        }
    }

    cout << *min_element(res.begin(), res.end()) << "\n";
}

/*
1. 2차원 배열도 매개변수로 고려하자
2. 문자열 배열일때는 null 문자도 고려하자
3. 케이스 임의대로 나누지 말자
*/