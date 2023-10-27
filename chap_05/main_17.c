#include <stdio.h>

int main(void) {
    int change, payment;
    int juice = 198;
    int milk = 138;
    int money = 1000;
    double tax = 1.05;

    payment = (int) ((juice + milk * 2) * tax);
    change = money - payment;
    
    printf("%d円\n", change);

    return 0;
}