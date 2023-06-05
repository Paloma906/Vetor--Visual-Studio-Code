#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// Crie um programa que leia 3 notas, armazenando em um  vetor e calcule a média aritmética.
// Mostre as 3 notas informadas pelo usuário e informe a média.

int main()
{
setlocale(LC_ALL, "");
    int i;
    float nota[3], soma, media;

    for (i = 0; i < 3; i++)
    {

        printf("Digite a nota:");
        scanf("%f", &nota[i]);
        soma += nota[i];
    }

system("cls");

    for (i = 0; i < 3; i++)
    {

        printf("%d� nota: %.2f\n", i + 1, nota[i]);
    }

    media = soma / i;
    printf("Media: %.2f", media);

    return 0;
}