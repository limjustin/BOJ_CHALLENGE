#include <cstdio>
#include <cmath>

double ABS(int num) {
    if(num < 0)
        num = -num;
    return num; 
}   

int main(void) {
    double x1, y1, r1;
    double x2, y2, r2;

    int n; scanf("%d", &n);
    double d; // Important : 자료형 꼭 주의해라!! (오백번 강조한다)
    for(int i = 0; i < n; i++) {

        scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);
        d = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));

        if (d==0 && r1 == r2) {
            printf("%d \n", -1);
        } else if (d==0 && r1 != r2) {
            printf("%d \n", 0);
        } else if((r1+r2 > d) && (fabs(r2-r1) < d)) {
            printf("%d \n", 2);
        } else if ((r1+r2 == d) || (fabs(r2-r1) == d)) {
            printf("%d \n", 1);
        } else if ((r1+r2 < d) || (fabs(r2-r1) > d)) {
            printf("%d \n", 0);
        }
    }

 }