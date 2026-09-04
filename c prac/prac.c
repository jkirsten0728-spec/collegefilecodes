#include <stdio.h>

int main (){


char name[] = "Lian";
char chips[] = "cheezy";
double money = 15.50;
float price = 20.3;
char symbol = '$';
int age= 18;

printf("hello, Im %s\n", name);
printf("i am %d\n", age);
printf("i would like to buy %s\n", chips);
printf("that would be %.2f %c\n", price, symbol);
printf("but i only have %.2lf\n", money);

    return 0;
}