#include <stdio.h>
#include <stdlib.h>

// Crie um algoritmo que preencha um vetor com 10 números reais, calcule e  mostre a quantidade de números negativos 
//e a soma dos números positivos  desse vetor.

int main(){

    float numero[10];
    float somaPositivo;
    int i,contadorPositivo=0,contadorNegativo=0;

    for (i=0; i<10;i++){
        printf("Digite o numero:");
        scanf("%f",&numero[i]);
       

        if (numero[i] < 0) {

            contadorNegativo++;

        }else{
            contadorPositivo++;
            somaPositivo += numero[i];
        }

        

    }

    printf("QUANTIDADE NUMEROS POSITIVOS: %d\n", contadorPositivo);
    printf("QUANTIDADE NUMEROS NEGATIVOS: %d\n", contadorNegativo);
    printf("SOMA DOS NUMEROS POSITIVOS: %.2f",somaPositivo);
}