#include <stdio.h>

//a program to convert m/s in km/h
int main(void){
    float m_s, km_h;

    printf("Type your velocity in m/s: ");
    scanf("%f", &m_s);
    km_h = m_s * 3.6;
    printf("Your velocity in km/h is %f", km_h);

    return 0;
}