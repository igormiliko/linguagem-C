#include<stdio.h>

//This program convert K => C°
int main(void){
    float kelvin;
    printf("Type your Kelvin temperature to be convert in Celcius: ");
    scanf("%f", &kelvin);

    float celcius = kelvin + 273.15;
    printf("Your K temperature in C° is: %f", celcius);

    return 0;
}