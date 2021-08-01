#include <cstdio>

int Pick(int arr[3]) {
    if(arr[0] == arr[2]) {
        return arr[1];
    } else if(arr[0] == arr[1]) {
        return arr[2];
    } else {
        return arr[0];
    }
}

int main(void) {
    int n1, n2;
    int x[3]; int y[3];
    
    for(int i = 0; i < 3; i++) {
        scanf("%d %d", &n1, &n2);
        x[i] = n1; y[i] = n2;
    }

    printf("%d %d", Pick(x), Pick(y));
}