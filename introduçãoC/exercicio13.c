#include <stdio.h>

//program to convert km in miles
int main (void){
    float miles, km;
    printf("Type your distance in km: ");
    scanf("%f", &km);
    miles = km / 1.61;
    printf("your distance in miles is: %f", miles);

    return 0;
}
