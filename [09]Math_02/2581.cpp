#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

bool Primenum(int num) {
    if(num == 1)
        return false;
    
    for(int i = 2; i <= num; i++) {
        if((num % i == 0) && num != i)
            return false;
    }
    
    return true;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int M, N;
    cin >> M >> N;
    
    vector<int> p;
    
    for(int i = M; i <= N; i++) {
        if(Primenum(i))
            p.push_back(i);
    }
    
    if(p.size() == 0) {
        cout << -1 << "\n";
    } else {
        cout << accumulate(p.begin(), p.end(), 0) << "\n" << *min_element(p.begin(), p.end()) << "\n";
    }
    
}