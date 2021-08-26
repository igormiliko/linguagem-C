#include <stdio.h>

//This program return the square of a float number
int main(void){
    float realNumber;
    printf("Type a number: ");
    scanf("%f", &realNumber);
    printf("The square of your number is: %f", realNumber*realNumber);

    return 0;
}