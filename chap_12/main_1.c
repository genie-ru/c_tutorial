#include <stdio.h>

int countfunc(void);

int main(void)
{
    countfunc();
    countfunc();
    countfunc();
    return 0;
}

int cocuntfunc(void)
{
    int count = 0;
    count ++;
    printf("%d\n", count);
    return count;
}