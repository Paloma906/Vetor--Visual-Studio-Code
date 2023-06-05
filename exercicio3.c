#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// Crie um programa que leia 5 números, armazenando em um  vetor e informe qual é o menor número e o maior.
// Mostre os números informados pelo usuário.

int main()
{
setlocale(LC_ALL, "");

    int i, numero[5];
    int menorNumero = INT_MAX, maiorNumero = INT_MIN;

    for (i = 0; i < 5; i++)
    {

        printf("Digite o numero:", i + 1);
        scanf("%d", &numero[i]);

        system("cls");

        if (numero[i] < menorNumero)
        {

            menorNumero = numero[i];
        }

        if (numero[i] > maiorNumero)
        {

            maiorNumero = numero[i];
        }
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d� numero: %d \n", i + 1, numero[i]);
    }

    printf("MENOR NUMERO: %d\n", menorNumero);
    printf("MAIOR NUMERO: %d\n", maiorNumero);

    return 0;
}






// Para ordem inversa
//  vetor 4 posições

// int numero[4];
// numero[0][1][2][3]

// for (i=3; i >=0; i--)
