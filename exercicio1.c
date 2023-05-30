#include <stdio.h>
#include <stdlib.h>

// Crie um programa que leia 3 notas, armazenando em um  vetor e calcule a média aritmética.
// Mostre as 3 notas informadas pelo usuário e informe a média.

int main()
{

    int i;
    float nota[3], soma, media;

    for (i = 0; i < 3; i++)
    {

        printf("Digite a nota");
        scanf("%f", nota[3]);
        soma += nota[i]
    }

    media = soma / i;

    for (i = 0; i < 3; i++)
    {

    printf("As notas foram, %dº nota: %f\n", i+1, nota[i]");
    
    }
    

    printf("Media: %f", media);

    return 0;
}