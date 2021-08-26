#include<stdio.h>
#include<math.h>

//This program convert C° => F°
int main(void){
    float celsiusTemp;
    printf("Type a C° temperature to convert in Fahrenheit: ");
    scanf("%f", &celsiusTemp);
    
    float fahTemp = (celsiusTemp * 1.8) + 32.0;

    printf("The Fahrenheit temperature is: %f", fahTemp);
    return 0;
}