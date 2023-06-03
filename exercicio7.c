#include <stdio.h>
#include <stdlib.h>

// Crie um algoritmo que leia 6 valores inteiros pares e, em seguida, mostre na  tela os valores lidos na ordem inversa. 

int main(){

    int valor[6];
    int i;

    for (i=0;i<6;i++){
        printf("Digite o valor:");
        scanf("%d",&valor[i]);


    }
   
   if (valor[6] % 2 = 0)
    for (i=5; i>=0; i--){      // tirar dúvida

        printf("OS NUMEROS NA ORDEM INVERSA: %d\n",valor[i]);
    }

    return 0;
}