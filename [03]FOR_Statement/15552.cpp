#include <cstdio>

int main(void) {
	int testcase;
	scanf("%d", &testcase);
	
	int a, b;
	while(testcase > 0) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a+b);
		testcase--;
	}
}