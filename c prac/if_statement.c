#include <stdio.h>

int main(){

    int age = 0; 

    printf("enter your age: ");
    scanf("%d", &age);

    if (age >= 65){
        printf("you're too old");
    }
    else if(age >= 18){
        printf("You're an adult");
    }
    else if (age < 0){
        printf("you havent born yet");
    }
    else if (age == 0){
        printf("you're a newborn");
    }
    else{
        printf("You're not an adult");
    }

    return 0;
}