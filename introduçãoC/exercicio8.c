#include<stdio.h>

//This program convert C° => K
int main(void){
    float celcius;
    printf("Type your C° temperature to be convert in Kelvin: ");
    scanf("%f", &celcius);
    float kelvin = celcius - 273.15;
    printf("Your C° temperature in Kelvin is: %fK", kelvin);
    
    return 0;
}