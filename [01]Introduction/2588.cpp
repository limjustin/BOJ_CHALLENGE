#include <cstdio>

int main(void) {
	int A, B;
	scanf("%d %d", &A, &B);
	
	printf("%d \n", (B % 10) * A);
	printf("%d \n", ((B / 10) % 10) * A);
	printf("%d \n", (B / 100) * A);
	
	printf("%d \n", (B / 100) * A * 100 + ((B / 10) % 10) * A * 10 + (B % 10) * A);
}