#include <stdio.h>

int main(){
    int apple_count, orange_count, str_count;
    printf("apple:");
    scanf("%d", &apple_count);
    printf("orange:");
    scanf("%d", &orange_count);
    printf("strawberry:");
    scanf("%d", &str_count);
    int apple_score = apple_count * 100;
    int orange_score = orange_count * 88;
    int str_score = str_count * 398;
    int total_score = apple_score + orange_score + str_score;
    printf("%d\n", total_score);
    return 0;
}