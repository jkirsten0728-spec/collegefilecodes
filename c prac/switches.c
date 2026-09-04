#include <stdio.h>

int main(){

    char dayofweek= '\0';

    printf("Enter a day of the week (M T W H F S U)");
    scanf(" %c", &dayofweek);

    switch(dayofweek){
        case 'M':
        case 'm':
        printf("it is monday\n");
        break;

        case 'T': 
        case 't':
        printf("it is tuesday\n");
        break;

        case 'W': 
        case 'w':
        printf("it is wednesday\n");
        break;

        case 'H': 
        case 'h':
        printf("it is thursday\n");
        break;

        case 'F': 
        case 'f':
        printf("it is friday\n");
        break;

        case 'S': 
        case 's':
        printf("it is saturday\n");
        break;

        case 'U': 
        case 'u':
        printf("it is sunday\n");
        break;

        default:
        printf("Invalid\n");
    }
    return 0;
}