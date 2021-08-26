#include<stdio.h>

//Program to convert Kg in Lb
int main(void){
    float mass_kg;
    float mass_lb;

    printf("Type your mass in Kg: ");
    scanf("%f", &mass_kg);

    mass_lb = mass_kg / 0.45;

    printf("Your mass in lb is: %.2flb\n", mass_lb);

    return 0;
}