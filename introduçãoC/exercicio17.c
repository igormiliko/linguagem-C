#include<stdio.h>

//program to convert centimeters in inches
int main(void){
    float centimeters, inches;
    printf("<---- CENTIMETER IN INCHES ---->\n\n");
    printf("Type tour width in centimeter: ");

    scanf("%f", &centimeters);

    inches = centimeters / 2.54;
    printf("your width in inches is: %.2f", inches);

    return 0;
}