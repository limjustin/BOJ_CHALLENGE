#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

bool compare(pair<string, int> p1, pair<string, int> p2) {

    if(p1.second == p2.second && p1.first.compare(p2.first) < 0)
        return p1.first > p2.first;

    else if(p1.second == p2.second && p1.first.compare(p2.first) > 0)
        return p1.first < p2.first;    
        
    else
        return p1.second < p2.second;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    string str;
    map<string, int> m;
    vector< pair<string, int> > words;

    for(int i = 0; i < N; i++) {
        cin >> str;
        words.push_back({str, str.length()}); // key가 중복되지 않게
    }

    // cout << "Before Sort \n";
    // for(auto iter = words.begin(); iter != words.end(); iter++)
    //     cout << iter->first << "\n";

    sort(words.begin(), words.end(), compare);

    words.erase(unique(words.begin(), words.end()), words.end());

    // cout << "After Sort \n";
    for(auto iter = words.begin(); iter != words.end(); iter++)
        cout << iter->first << "\n";
}