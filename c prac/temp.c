#include <stdio.h>

int main(){

    char choice= '\0';
float celsius= 0.0f;
float fahrenheit = 0.0f;

printf("temperature covertion program\n");
printf("F fahrenheight or celsius\n");
printf("C celisius or fahrenheight\n");
printf("is the temperature to celsius (C) or fahrenheit (F)?");
scanf("%c", &choice);

if(choice == 'C' || choice == 'c'){
    printf("enter the temperature in celsius");
    scanf("%f", &celsius);
    fahrenheit= (celsius *9/5) + 32;
    printf("%.1f celsius is equal to %.1f fahrenheit\n", celsius, fahrenheit);

}
else if(choice == 'F' || choice == 'f'){
printf("enter the temperature in fahrenheit");
    scanf("%f", &fahrenheit);
    celsius= (fahrenheit - 32) * 5/9;
    printf("%.1f fahrenheit is equal to %.1f celsius\n", fahrenheit, celsius);
}
else{
    printf("invalid choice\n");
}
    return 0;
}