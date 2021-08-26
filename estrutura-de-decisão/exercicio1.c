#include<stdio.h>

int main(void){
    int first, second;

    printf("Type two numbers to compare => \n First Number: ");
    scanf("%i", &first);
    printf("Second number: ");
    scanf("%i", &second);

    if(first > second)
    {
        printf("The biggest number is: %i", first);
    }
    else if(first == second){
        printf("It's a tie!\n");
    }
    else{
        printf("The biggest number is: %i", second);
    }

    return 0;
}