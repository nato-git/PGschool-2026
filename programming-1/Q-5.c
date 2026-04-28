#include <stdio.h>

/*
    三角形の高さと底辺の長さを入力し，三角形の面積を求めるプログラムを作りなさい．
    ただし．高さと底辺は実数とする．
*/

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