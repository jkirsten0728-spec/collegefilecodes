#include <stdio.h>
#include <stdbool.h>

int main(){

    float discount = 10.00;
    bool student = false; // 10
    bool senior = false; // 20

    // student 9
    //senior 8
    // student + sennior 7

    if (student){
        if(senior){
            printf ("you get a discount of 30%\n");
            discount*= 0.7;
        }
        else
        printf("You get a discount of 10%\n");
        discount*=0.9;
    }
    else{
        if (senior){
            printf("you get a discount of 20%\n");
        discount*= 0.8;
        }

        printf("The price of a ticket is: $%.2f\n", discount);
    }

        

    return 0;
}