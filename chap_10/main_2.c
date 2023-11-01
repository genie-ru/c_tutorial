#include <stdio.h>

int main(void) {
    intr;
    double s;

    printf("半径?:");
    scanf("%d", &r);
    if (r < 0) {
        printf("半径は負の値になりません。\n");
    } else {
        s = r * r * 3.14;
    }

    return 0;
}