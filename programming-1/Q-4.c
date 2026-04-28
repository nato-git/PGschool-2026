#include <stdio.h>

/*
    1クラスの人数がa人である時，野球(9人)をbチーム，バレー(6人)をcチーム作れば
    何人が参加できないかを計算するプログラムを作りなさい．
*/

int main(){
    int a, b, c;
    printf("how many people:");
    scanf("%d", &a);
    printf("how many baseball-team:");
    scanf("%d", &b);
    printf("how many volleyball-team:");
    scanf("%d", &c);
    if (a < (9 * b + 6 * c)){
        printf("not enough people\n");
        return 0;
    }
    int baseball_players = 9 * b;
    int volleyball_players = 6 * c;
    int rest_people = a - (baseball_players + volleyball_players);
    printf("rest people: %d\n", rest_people);
    return 0;
}