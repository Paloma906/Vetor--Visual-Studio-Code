#include <stdio.h>
#include <stdlib.h>

//Crie um programa que leia 4 notas, armazenando em um  vetor e calcule a média aritmética. 
//Verifique a situação do aluno considerando: 
//- Média maior ou igual a 7: Aprovado. 
//- Média maior ou igual a 5: Recuperação. 
//- Média menor que 5: Reprovado. 
//Mostre as 4 notas informadas pelo usuário e informe a média.

int main(){

    int i,contador;
    float nota[4],soma,media;

    for (i = 0; i < 4; i++){

        printf("Digite a nota: ");
        scanf("%f",&nota[i]);
        contador++;
        soma += nota[i];

     system("cls");   

    }

    media = soma/contador;

    for (i = 0; i < 4; i++){

        printf("%d nota: %.2f\n",i+1,nota[i] );

    }

    printf("MEDIA: %.2f\n",media);

    if (media>=5 && media<7){
        printf("RECUPERACAO");
    
    }else if (media <5){
        printf("Reprovado");
    }

    if (media >=7){
        printf("APROVADO!");
    }

    return 0;
}
