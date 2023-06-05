#include <stdio.h>
#include <stdlib.h>

//Crie um algoritmo que leia o nome e a idade de 5 pessoas,  armazenando em vetores. 
//- Liste o nome e a idade de cada pessoa.

int main(){

    char nome[5][50];
    int idade[5];
    int i,j;
    
    for (i=0; i<5; i++){

        printf("Digite o nome: ");
        scanf("%s",&nome[i]);

        printf("Digite a idade:");
        scanf("%d",&idade[i]);
    }

system ("cls");

    for (i=0; i<5; i++){

        printf("Nome: %s\n",nome[i]);
        
        printf("Idade: %d\n",idade[i]);
        
    }

    return 0;
}