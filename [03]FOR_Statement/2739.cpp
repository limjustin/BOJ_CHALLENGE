#include <cstdio>

int main(void) {
	int dan;
	scanf("%d", &dan);
	
	for(int i = 1; i <= 9; i++)
		printf("%d * %d = %d \n", dan, i, dan*i);
}