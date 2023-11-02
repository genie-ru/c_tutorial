#include <stdio.h>
#include <string.h>

struct student {
    int year;
    int clas;
    int number;
    char name[64];
    double stature;
    double wight;
};

int main(void)
{
    struct student data1, data2;

    data1.year=3;
    data1.clas=4;
    data1.number=18;
    strcpy(data1.name,"MARIO");
    data1.stature = 168.2;
    data1.weight=72.4;

    data2 = data1;

    printf("data1.year = %d : data2 year = %d\n",
                                data1.year, data2.year);
    printf("data1.clas = %d : data2 clas = %d\n",
                                data2.clas, data2.clas);
    printf("data1.number = %d : data2 number = %d\n",
                                data2.number, data2.number);
    
}