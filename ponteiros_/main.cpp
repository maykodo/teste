#include <stdio.h>
#include <stdlib.h>

int somar (int a, int b);
int subtrair(int a, int b);

int (*sub)(int, int)= subtrair;

int operacao(int x, int y, int(*func)(int, int));

int main()
{
    int i, j;
    i = operacao(7, 5, somar);
    j = operacao(20, i, sub);

    printf("o resultado das operações : \n\n");
    printf("\t7+5 = %d\n\n", i, j);
    printf("\t20-%d = %d\n\n", i, j);
    system("pause");
    return 0;
}

int somar (int a, int b)
{
    return (a+b);
}

int subtrair(int a, int b)
{
    return (a-b);
}

int operacao(int x, int y, int (*func)(int, int))
{
    int op;
    op = func(x, y);
    return (op);
}

