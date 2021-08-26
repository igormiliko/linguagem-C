#include<stdio.h>

//program to convert degrees in radians
int main(void){
    float degrees, radians;

    printf("Type a angle in degrees: ");
    scanf("%f", &degrees);

    radians = (degrees * 3.14) / 180;
    printf("Your angle in radians is: %f", radians);
    return 0;
}
