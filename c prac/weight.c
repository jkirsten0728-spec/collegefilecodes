#include <stdio.h>
#include <math.h>

int main(){

    int choice = 0;
    float pounds = 0.0f;
    float kilogram = 0.0f;

    printf("Weight Conversion calc\n");
    printf("1. kilograms to pounds\n");
    printf("2. pounds to kilograms\n");
    printf("enter your choice (1 or 2) ");
    scanf("%d", &choice);

    if(choice== 1){
        //kilograms to pounds
        printf("enter the weight in kilograms ");
        scanf("%f", &kilogram);
        pounds = kilogram * 2.20462;
        printf("%.2f kilogram is equal to %.2f pounds\n", kilogram, pounds);
    }

    else if (choice== 2){
        printf("Enter your weight in pounds ");
        scanf("%f", &pounds);
        kilogram = pounds / 2.20462;
        printf("%.2f pounds is equal to %.2f kg\n", pounds, kilogram);
    }
    else{
        printf("invalid choice!");
    }
    return 0;
}