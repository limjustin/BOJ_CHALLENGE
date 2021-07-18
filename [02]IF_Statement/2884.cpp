#include <cstdio>

int main(void) {
	int hour, min;
	scanf("%d %d", &hour, &min);
	
	if(hour != 0 &&  min < 45) {
		hour = hour - 1;
		min = 60 - (45 - min);
	} else if(min >= 45) {
		min = min - 45;
	} else if(hour == 0 && min < 45) {
		hour = 23;
		min = 60 - (45 - min);
	}
	
	printf("%d %d \n", hour, min);
}

// 모든 단위를 분으로 바꿔서 풀 수도 있더라!