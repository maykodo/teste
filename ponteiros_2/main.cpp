#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int vTeste[3] = {1, 2, 3};
    int *ptr =vTeste;

    printf("endereco da memoria do vetor vTeste: %p\n", vTeste);
    printf("endereco de memoria que esta em ptr: %p \n\n\n", ptr);
    printf("enderecp de memoria de ptr: %p\n\n\n", &ptr);

    for(i=0; i<3; i++)
    {
        printf("o endereco do indice %d do vetor %c %p\n", i, 130, &ptr[i]);
        printf("o endereco do indice %d do vetor %c %d\n", i, 130, ptr[i]);
    }

    printf("\n");


            system("pause");
            return 0;
}
