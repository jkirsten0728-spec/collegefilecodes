#include <stdio.h>

int main() {
    // Write your code here
    float celsius=25.0f;
    double fahrenheit;

    fahrenheit = (celsius*9.0/5.0)+ 32.0;

    printf("%.1f degrees celsius is equal to %.1f degrees fahrenheit" , celsius, fahrenheit);

    return 0;
}