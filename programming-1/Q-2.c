#include <stdio.h>

int main(){
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double average = (a + b + c)/ 3.0;
    printf("%.0lf\n", average);
    return 0;
}