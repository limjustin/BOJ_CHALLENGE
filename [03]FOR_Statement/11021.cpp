#include <cstdio>

int main(void) {
	int testcase;
	scanf("%d", &testcase);
	
	int a, b;
	for(int i = 1; i <= testcase; i++) {
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d \n", i, a+b);
	}
}