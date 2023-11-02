#include <stdio.h>
#include <string.h>

int main(void)
{
    char fname[256], lname[256];

    printf("名字を入力してください:");
    scanf("%s",fname);

    printf("%s", lname);

    strcat(fname, lname);
    printf("フルネームは %s\n", fname);

    return 0;
}