#include <stdio.h>
#include <string.h>

typedef struct {
    int year;
    int clas;
    int number;
    char name[64];
    double stature;
    double weight;
} student;

int main(void)
{
    student data;
    student *pdata;
    
    // 初期化
    pdata = &data;
    (*pdata).year = 10;
    strcpy(*pdata).name, "MARIO";

    return 0;
}