#include<stdio.h>

//program to convert Jards in meters
int main(void){
    float jards, meters;

    printf("Type your width in Jards: ");
    scanf("%f", &jards);

    meters = jards * 0.91;

    printf("Your width in meters is: %.2fm\n", meters);

    return 0;
}