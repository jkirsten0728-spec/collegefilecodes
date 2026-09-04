#include <stdio.h>
#include <stdbool.h>
int main (){

// variable = a reusable container for a value. 
// Behaves as if it were the value it contains.

// int = whole numbers (4bytes in modern systems)
// float = single- precision decimal number (4bytes)
//double= double- precision decimal number (8 bytes)
// char= single character (1 byte)
//char []= aray of characters (size varies)
//boolean true or false (1 byte, requires <stdbool.h>)
    
    printf("I like pixxa!\n");
    printf("its really good!\n");
   

    int age= 25;
    int year =2026;


    printf("you are %d years old\n", age);
printf("The year is %d\n", year);

float gpa= 2.5;
float price= 10;

printf("your  price is %.2f\n", price);
printf("your gpa is %f\n", gpa);

double pi= 3.1415926535;
printf("the value of pi is %lf\n", pi);

char grade = 'A';
char symbol ='!';
printf("your grade is %c\n", grade);
printf("your fav symbol is %c\n", symbol);
    

char name[] = "Lian";
printf("Hello %s\n", name); 



bool isOnline = false;
if(isOnline){
printf("you are Online");
}
else {
printf("You are Offline");

}


return 0;

    
}