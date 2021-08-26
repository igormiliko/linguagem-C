#include<stdio.h>

//program to convert Lb in Kg
int main(void){
    float mass_lb, mass_kg;

    printf("Type your mass in lb: ");
    scanf("%f", &mass_lb);

    mass_kg = mass_lb * 0.45;

    printf("Your mass in Kg is: %.2fKg\n", mass_kg);

    return 0;
}