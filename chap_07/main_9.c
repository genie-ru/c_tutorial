#include <stdio.h>

int main(void) {
    int value, remainder;

    scanf("%d", &value);

    scanf("%d", &value);

    remainder = value % 2;

    if (remainder == 0) printf("E");
    if (remainder == 1) printf("0");

    printf("\n");

    return 0;
}