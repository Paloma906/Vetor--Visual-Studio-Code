#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Crie um algoritmo que leia 6 valores inteiros pares e, em seguida, mostre na  tela os valores lidos na ordem inversa.

int main()
{

setlocale(LC_ALL, "");

    int valor[6];
    int i;

    for (i = 0; i < 6; i++)
    {

        do
        {
            printf("Digite o valor:");
            scanf("%d", &valor[i]);

        } while (valor[i] % 2 == 1);
    }

    for (i = 5; i >= 0; i--)
    {
        printf("%dº numero: %d \n", i + 1, valor[i]);
    }

    return 0;
}
