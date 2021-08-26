#include<stdio.h>

//program to convert miles in km
int main(void){
    float miles, km;

    printf("Type your distance in miles: ");
    scanf("%f", &miles);
    km = miles *1.61;
    printf("Your distance in km is: %f", km);
    return 0;
}