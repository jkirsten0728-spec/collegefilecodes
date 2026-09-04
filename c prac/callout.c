#include <stdio.h>
#include <string.h>

void hbd(char name[], int age){

    printf("happy birthday to you\n");
    printf("happy birthday to you\n");
    printf("happy birthday to %s\n", name);
    printf("You're %d years old!\n", age);

}
int main(){

    char name[50] = "";
    int age = 0;

    printf("Name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name)-1] ='\0';

    printf("age: ");
    scanf("%d", &age);

    hbd(name, age);

    return 0;
}