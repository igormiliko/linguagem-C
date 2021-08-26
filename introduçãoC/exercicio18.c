#include<stdio.h>

//Program to convert volume in cubic meters
int main(void){
    float vol_L, m_3;
    printf("Type your volume in cubic meters: ");
    scanf("%f", &m_3);

    vol_L = m_3 * 1000;
    printf("Your volume in liters is: %.2fL",vol_L);

    return 0;
}