#include <stdio.h>

main(){

int n[5];
int i, maior=0, menor=10000, soma=0;
float media;

for (i=0;i<5;i++)
{
printf("digite o %d numero : ", i+1);
scanf("%d", &n[i]);
if(n[i] > maior){
    maior = n[i];
    }
 if (n[i]< menor){
    menor = n[i];
 }
 soma =soma+n[i];
}
printf("*** MOSTRA VETOR ***\n");
for (i=0;i<5;i++){
    printf("o %d numero e : %d\n", i+1, n[i]);
}
printf("*** Mostra Vetor Invertido***\n");
for (i=4;i>=0;i--){
    printf("o %d numero e : %d\n", i+1, n[i]);
}
printf("o primeiro e : %d\n", n[0]);
printf("o ultimo numero e : %d\n", n[4]);
printf("o maior numero e : %d\n", maior);
printf("o menor numero e : %d\n", menor);
printf("a soma dos numeros e : %d\n", soma);
media = soma/5;
printf("A media e :%.2f ", media);
}

