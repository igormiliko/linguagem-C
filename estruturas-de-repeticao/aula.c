#include<stdio.h>

int main(void){
    //somar cinco números
    int numero, soma = 0;

    for(int i = 0; i < 5; i++){
        printf("Digite um número:");
        scanf("%i", &numero);

        soma += numero;
    }
    printf("a soma é : %i", soma);
    return 0;
}