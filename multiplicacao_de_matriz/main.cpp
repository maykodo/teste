#include <iostream>
#include <stdlib.h>

using namespace std;

int preecher( int l,int c, int *matriz[][])
{
    for(int i=0;i<l;i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<"entre com o valor da posição ["<<i<<"]["<<j<<"]: ";
            cin>>matriz[i][j];
        }
    }
return 0;
}

int main ()
{
   int l1=0, l2=0, c1=0, c2=0;
   //tamanho matriz 1
   cout<<"entre com o tamanho da matriz1\n";
   cout<<"numero de linhas: ";
   cin>>l1;
   cout<<"numero de colunas: ";
   cin>>c1;
int matriz_1[l1][c1];
   //tamanho matriz 2
   cout<<"entre com o tamanho da matriz1\n";
   cout<<"numero de linhas: ";
   cin>>l1;
   cout<<"numero de colunas: ";
   cin>>c1;

   int matriz_2[l2][c2];
   int matriz_final[l1][c2];

    preecher(l1 ,c1, matriz_1 );

}
