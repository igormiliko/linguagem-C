#include<stdio.h>

//Program to convert m² to acre
int main(void){
    float m_square, acre;

    printf("Type your area in meter squared: ");
    scanf("%f", &m_square);

    acre = m_square * 0.000247;

    printf("your area in Acres is: %.2f A", acre);

    return 0;
}