#include<stdio.h>
#include<math.h>

//This program convert F° => C°
int main(void){
    float fahTemp;
    printf("Type a F° temperature to convert in C°: ");
    scanf("%f", &fahTemp);
    float celciusTemp = ((fahTemp - 32.0) * 5.0) / 9.0;
    printf("your F° temperature in C°, rounded is: %fC°", round(celciusTemp));
    return 0;
}