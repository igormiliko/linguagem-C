#include<stdio.h>

//This program convert Km/h => m/s
int main(void){
    float velocityKM;

    printf("Type a velocity in Km/h to be convert they in m/s: ");
    scanf("%f", &velocityKM);

    printf("your velocity in m/s is: %fm/s", velocityKM / 3.6);

    return 0;
}
