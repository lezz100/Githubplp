#include <stdio.h>
#include <string.h>

struct Player{
    char name[10];
    int score;
};
int main() {
    struct Player player1;
    struct Player player2;

    strcpy(player1.name,"Captain \n");
    (player1.score,80);

    strcpy(player2.name,"Lezz \n");
    (player2.score,90);

    printf("%s",player1.name);
    printf("%d",player1.score);

    printf("%s",player2.name);
    printf("%d",player2.score);

    return 0;
}