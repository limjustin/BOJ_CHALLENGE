#include <iostream>
#include <vector>
#define MAX 1000000
using namespace std;

int main(void) {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL); cout.tie(NULL);

    // Get eratos
    vector<bool> eratos(MAX + 1, true);
    eratos[1] = false;

    for(int num = 2; num <= MAX; num++) {
        if(!eratos[num])
            continue;

        for(int idx = 2; idx <= MAX/num; idx++)
            eratos[num * idx] = false;
    }

    
}