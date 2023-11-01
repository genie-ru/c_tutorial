#include <stdio.h>

int main(void) {
    int r;
    double s;

    printf("半径?:");
    scanf("%d\n", &r);
    while (r < 0) {
        printf("半径?:");
        scanf("%d", &r);
    }

    s = r * r * 3.14;
    printf("面積は%fです。\n", s);

    return 0;
}