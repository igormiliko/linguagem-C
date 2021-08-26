#include <stdio.h>

//This program return the fifth part of a number
int main(void){
    float partNumber;
    printf("Type a number to return your fifth part: ");
    scanf("%f", &partNumber);
    printf("the fifth part of your number is: %f", partNumber/5);
    return 0;
}