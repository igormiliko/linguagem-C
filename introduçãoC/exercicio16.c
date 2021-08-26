#include<stdio.h>
#include<math.h>
//A program to convert inches in centimeters

int main(void){
    float inches, cm;

    printf("Type your width in inches: ");
    scanf("%f\"", &inches);

    cm = inches * 2.54;
    printf("Your width in cm is: %.2fcm", cm);

    return 0;
}