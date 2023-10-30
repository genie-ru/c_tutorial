#include <stdio.h>

int main(void) {
    int no;
    scanf("%d", &no);
    switch (no) {
    case 1:
        printf("男性\n");
        break;
    case 2:
        printf("女性\n");
        break;
    case 3:
        printf("男性\n");
        break;
    case 4:
        printf("男性\n");
        break;
    default:
        printf("そんな番号の人はいない\n");
        break;
    }
    return 0;
}