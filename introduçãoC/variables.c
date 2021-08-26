//library to default in and out
#include<stdio.h>

int main(void){
    //declaring variables
    int age;

    //function to print the question(in)
    printf("How old are you? ");
    //capturing the value
    scanf("%i", &age);

    //print the age of the user(out)
    printf("Your age is %i", age);

    //return 0 to a program without errors
    return 0;
}