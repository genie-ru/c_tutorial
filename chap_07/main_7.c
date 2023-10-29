#include <stdio.h>

int main(void)
{
    int score;
    printf("点数を入力してください: \n");
    scanf("%d", &score);
    if (score > 100) score = 100;
    printf("点数は %d 点です。\n", score);
    return 0;
}