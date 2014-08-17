#include <stdio.h>

main()
{
    float n1, n2, n3, n4, media;

    printf("digite suas 4 notas: ");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    scanf("%f", &n4);

    media=(n1+n2+n3+n4)/4;
    printf("\nSua media e: %.2f", media);

    if (media<3){
        printf("\nvoce foi reprovado");
    }
    else if (media>=3 && media<7){
        printf("\nvoce vai para a prova final");
    }
    else{
        printf("\n\7voce esta aprovado");
    }

}
