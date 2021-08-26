#include<stdio.h>

//program to convert meters in jards
int main(void){
    float meters;
    float jards;

    printf("Type your width in meters: ");
    scanf("%f", &meters);

    jards = meters / 0.91;

    printf("Your width in Jards is: %.2fJ\n", jards);

    return 0;
}