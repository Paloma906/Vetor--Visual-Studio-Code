#include <stdio.h>
#include <stdlib.h>

//Crie um programa que leia 6 números, armazenando em um  vetor e informe quantos são pares e quantos são ímpares. 
//Mostre os números informados pelo usuário.

int main(){

int i,contadorPar=0,contadorImpar=0;
int numero[6];

for (i=0;i<6;i++){
   printf("Digite o numero:");
   scanf("%d",&numero[i]);
}

system("cls");

   for (i=0;i<6;i++){
   if (numero[i] % 2 == 0){
      contadorPar++;
    

   } else{
       contadorImpar++;
   }
  
}

for (i=0;i<6;i++){
    printf("%d numero: %d\n",i+1,numero[i]);
}
   printf("NUMEROS PARES: %d\n",contadorPar);
   printf("NUMEROS IMPARES: %d",contadorImpar);

return 0;

}
