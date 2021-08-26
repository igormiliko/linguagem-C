#include<stdio.h>

//A program to convert radians in degrees
int main(void){
    float radians, degrees;

    printf("Type your angle in radians: ");
    scanf("%f", &radians);

    degrees = ((radians * 180) / 3.14);
    printf("Your angle in degrees is: %.2f°", degrees);

    return 0;
}