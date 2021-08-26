#include <stdio.h>

//this program return the sum of three numbers
int main(void){
    int firstInt, secondInt, thirdInt;

    printf("Type the first integer to sum: ");
    scanf("%i", &firstInt);
    printf("Type the second integer to sum: ");
    scanf("%i", &secondInt);
    printf("Type the third integer to sum: ");
    scanf("%i", &thirdInt);
    int result = firstInt + secondInt + thirdInt;
    printf("The result of:\n %i + %i + %i = %i\n", firstInt,secondInt,thirdInt,result);

    return 0;
}