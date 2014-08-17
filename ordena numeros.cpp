#include<stdio.h>
#include<stdlib.h>

main(){
       int a=-1,b,c,auxiliar,numeros[100];
       do{
       a++;
       printf("Digite o um numero ou 0 <zero> para sair : ");
       scanf("%i",&numeros[a]);
       }while(a<100&&numeros[a]!=0);
       printf("\n\t\t\tNUMEROS DESORDENADOS\n\n");
       for(b=0;b<a;b++)printf("%i ",numeros[b]);

       for(b=0;b<a;b++)
       for(c=0;c<a;c++)
       if(numeros[c]>numeros[c+1]){
       auxiliar=numeros[c];
       numeros[c]=numeros[c+1];
       numeros[c+1]=auxiliar;
       }

       printf("\n\t\t\tNUMEROS ORDENADOS\n\n");
       for(b=0;b<=a;b++)printf("%i ",numeros[b]);

       printf("\n\n");
system("pause");
}
