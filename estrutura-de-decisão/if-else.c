#include <stdio.h>

int main(void){
    int user_age;
    printf("How old are you? ");
    scanf("%i", &user_age);

    if(user_age < 18)
    {
        printf("You are under the age!\n");
    }
    else if(user_age >= 18 && user_age < 60)
    {
        printf("You are adult!\n");
    }
    else
    {
        printf("You are older!\n");
    };
    printf("Your age is: %i", user_age);

    return 0;
}