#include <stdio.h>

#define GET_TRAPZOID_AREA(A,B,H) (A + B) * H / 2

int main(void)
{
    int up,down,h,s;
    printf("上辺,下辺,高さ:");
    scanf("%d,%d,%d",&up,&down,&h);
    s = GET_TRAPZOID_AREA(up,down,h + 3);
    printf("面積:%d\n",s);
    return 0;
}