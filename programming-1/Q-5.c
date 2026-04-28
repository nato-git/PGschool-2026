#include <stdio.h>

int main(){
    double height, width;
    printf("height:");
    scanf("%lf", &height);
    printf("width:");
    scanf("%lf", &width);
    double triangle_area = (height * width) / 2.0;
    printf("%.5lf\n", triangle_area);
    return 0;
}