#include <stdio.h>

int tri(int, int);

int main(void)
{
    int base, height;
    scanf("%d %d", &base, &height); // コンマをスペースに変更
    printf("%d\n", tri(base, height)); // &height を height に変更

    return 0;
}

int tri(int base, int height) // &height を height に変更
{
    return base * height / 2; // &height を height に変更
}
