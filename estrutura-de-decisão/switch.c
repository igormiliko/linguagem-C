#include<stdio.h>

int main(void){
    int week_day;
    printf("Type a number between 1 and 7: ");
    scanf("%i", &week_day);

    switch(week_day)
    {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid number\n");
    }
    return 0;
}