#include<stdio.h>

//Program to convert liters in cubic meters
int main(void){
    float m_3, vol_L;
    printf("Type your volume in liters: ");
    scanf("%f", &vol_L);

    m_3 = vol_L / 1000;
    printf("Your volume in cubic meters is: %.3fm³", m_3);

    return 0;
}