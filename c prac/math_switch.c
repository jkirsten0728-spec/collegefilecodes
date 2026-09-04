#include <stdio.h>
#include <math.h>

int main(){

    char operator = '\0';
    double num1= 0.0;
    double num2= 0.0;
    double result= 0.0;

    printf("Enter the first number: \n");
    scanf("%lf", &num1);

    printf("Enter the operator: \n");
    scanf(" %c", &operator);

    printf("enter the second number: \n");
    scanf("%lf", &num2);
    

    switch(operator){
        case '+':
            result= num1 + num2;
            break;
        case '-':
            result= num1 - num2;
            break;
        case '*':
            result= num1 * num2;
            break;
        case '/':
            if (num1== 0){
            printf("you cant divide by zero\n");    
            }
            else if(num2== 0){
            printf("you cant divide by zero\n");
            }
            else{
            result= num1 / num2;
            }
        break;

        default:
        printf("invalid\n");
    }

    printf("the result is %.0lf\n", result);
    
    

    return 0;
}