#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;
int tempo()
{
    int escolha;
    int Horas;
    int Minutos;
    int Segundos;
    int hora = 60;
    int Min = 60;
    int Seg = 60;
    int convr;

    cout << "MENU" << endl;
    cout << "\n 1 - Converter Horas Para Minutos" << endl;
    cout << "\n 2 - Converter Horas Para Segundos" << endl;
    cout << "\n 3 - Converter Minutos Para Horas" << endl;
    cout << "\n 4 - Converter Minutos Para Segundos" << endl;
    cout << "\n 5 - Converter Segundos Para Minutos" << endl;
    cout << "\n 6 - Converter Segundos Para Horas" << endl;

    cin >> escolha;

    switch (escolha)
    {
           case 1:
                {

                cout << "\n Escolheu Converter Horas Para Minutos" << endl;

                cout << "\n Insira o nº de Horas a Converter: " << endl;
                cin >> Horas;

                // 1 Hora = 60 Minutos
                convr = Horas * hora;

                cout << Horas << " São " << convr << " Minutos" << endl;

                }

                case 2:
                {

                cout << "\n Escolheu Converter Horas Para Segundos" << endl;

                cout << "\n Insira o nº de Horas a Converter: " << endl;
                cin >> Horas;

                // 1 Hora = 60 Minutos
                convr = Horas * Min * Seg;

                cout << Horas << " São " << convr << " Segundos" << endl;

                }

                case 3:
                {

                cout << "\n Escolheu Converter Minutos Para Horas" << endl;

                cout << "\n Insira o nº de Minutos a Converter: " << endl;
                cin >> Minutos;

                // 1 Hora = 60 Minutos
                convr = Minutos / hora;

                cout << Minutos << " São " << convr << " Horas" << endl;

                }

                case 4:
                {

                cout << "\n Escolheu Converter Minutos Para Segundos" << endl;

                cout << "\n Insira o nº de Minutos a Converter: " << endl;
                cin >> Minutos;

                // 1 Hora = 60 Minutos
                convr = Minutos * Seg;

                cout << Minutos << " São " << convr << " Segundos" << endl;

                }

                case 5:
                {

                cout << "\n Escolheu Converter Segundos Para Horas" << endl;

                cout << "\n Insira o nº de Segundos a Converter: " << endl;
                cin >> Segundos;

                // 1 Hora = 60 Minutos
                convr = Segundos / Min / hora;

                cout << Segundos << " São " << convr << " Horas" << endl;

                }

                case 6:
                {

                cout << "\n Escolheu Converter Segundos Para Minutos" << endl;

                cout << "\n Insira o nº de Segundos a Converter: " << endl;
                cin >> Segundos;

                // 1 Hora = 60 Minutos
                convr = Segundos / Min;

                cout << Segundos << " São " << convr << " Minutos" << endl;

                }
    }

    cin.get();
    cin.get();

return 0;
}


int Celsius_Fahrenheits() {
    float tc, tf, tk;
  printf("\nDigite a temperatura em Celsius.: ");
  scanf("%f", &tc);
  tf = ((9*tc + 160)/5);
  printf("\nA temperatura em Fahrenheits = %f\n", tf);

}

void Celsius_Kelvin() {
    float tc, tf, tk;
  printf("\nDigite a temperatura em Celsius.: ");
  scanf("%f", &tc);
  tk = (tc + 273);
  printf("\nA temperatura em Kelvin = %f\n", tk);

}

void Fahrenheits_Celsius() {
    float tc, tf, tk;
  printf("\nDigite a temperatura em Fahrenheits.: ");
  scanf("%f", &tf);
  tc = ((5*(tf - 32))/9);
  printf("\nA temperatura em Celsius = %f\n", tc);

}

void Fahrenheits_Kelvin() {
    float tc, tf, tk;
  printf("\nDigite a temperatura em Fahrenheits.: ");
  scanf("%f", &tf);
  tk = ((5*tf + 2297)/9);
  printf("\nA temperatura em Kelvin = %f\n", tk);

}

void Kelvin_Celsius() {
    float tc, tf, tk;
  printf("\nDigite a temperatura em Kelvin.: ");
  scanf("%f", &tk);
  tc = (tk - 273);
  printf("\nA temperatura em Celsius = %f\n", tc);

}

void Kelvin_Fahrenheits() {
    float tc, tf, tk;
  printf("\nDigite a temperatura em Kelvin.: ");
  scanf("%f", &tk);
  tf = ((9*tk - 2297)/5);
  printf("\nA temperatura em Fahrenheits = %f\n", tf);

}



int massa()
{
    int opcao1=0,opcao2=0;
    int e=0,s=0,aux=0,b=0;
    float res=0;
    long int a=0;

system("color 64");

cout<<"escolha a opcao: \n\n";
cout<<"1.exagrama\n2.petagrama\n3.teragrama\n4.gigagrama\n5.Megagrama\n6.Quilograma\n7.hectorgrama\n8.decagrama\n9.grama\n10.decigrama\n11.centigrama\n12.miligrama\n13.micrograma\n14.nanograma\n15.picograma\n16.femtograma\n17.attograma\n18.sair\n\n entre com uma das opcoes: ";
cin>> opcao1;
        switch(opcao1){
case  1:
    e=18;
    break;
case 2:
    e=15;
    break;
case 3:
    e=12;
    break;
case 4:
    e=9;
    break;
case 5:
    e=6;
    break;
case 6:
    e=3;
    break;
case 7:
    e=2;
    break;
case 8:
    e=1;
    break;
case 9:
    e=0;
    break;
case 10:
    e=-1;
    break;
case 11:
    e=-2;
    break;
case 12:
    e=-3;
    break;
case 13:
    e=-6;
    break;
case 14:
    e=-9;
    break;
case 15:
    e=-12;
    break;
case 16:
    e=-15;
    break;
case 17:
    e=-18;
    break;
case 18:
    cout<<"obrigado por usar nosso programa";
    break;
default:
    system("cls");
    cout<<"\n\nopcao invalida\n\n";
    system("pause");
    return 0;
        }
        printf("\nentre com o valor a ser convertido:  ");
        cin>>a;

     cout<<"\n\nescolha a opcao: \n\n";
cout<<"1.exagrama\n2.petagrama\n3.teragrama\n4.gigagrama\n5.Megagrama\n6.Quilograma\n7.hectorgrama\n8.decagrama\n9.grama\n10.decigrama\n11.centigrama\n12.miligrama\n13.micrograma\n14.nanograma\n15.picograma\n16.femtograma\n17.attograma\n\n entre com uma das opcoes: ";
cin>> opcao2;
 switch(opcao2){
case  1:
    s=18;
    break;
case 2:
    s=15;
    break;
case 3:
    s=12;
    break;
case 4:
    s=9;
    break;
case 5:
    s=6;
    break;
case 6:
    s=3;
    break;
case 7:
    s=2;
    break;
case 8:
    s=1;
    break;
case 9:
    s=0;
    break;
case 10:
    s=-1;
    break;
case 11:
    s=-2;
    break;
case 12:
    s=-3;
    break;
case 13:
    s=-6;
    break;
case 14:
    s=-9;
    break;
case 15:
    s=-12;
    break;
case 16:
    s=-15;
    break;
case 17:
    s=-18;
    break;
case 18:
    cout<<"obrigado por usar nosso programa";
    break;
default:
    system("cls");
    cout<<"\n\nopcao invalida\n\n";
    system("pause");
    return 1;
        }
        aux=e-s;

res=a*pow(10,aux);
cout<<"\no valor comvertido e :"<<res<<"\n\n";


    system("pause");
    system("cls");
        }
        int comprimento()
{
    int opcao1=0,opcao2=0;
    int e=0,s=0,aux=0,b=0;
    float res=0;
    long double a=0;

system("color 46");

cout<<"escolha a opcao: \n\n";
cout<<"1.exametro\n2.petametro\n3.terametro\n4.gigametro\n5.Megametro\n6.Quilometro\n7.hectometro\n8.decametro\n9.metro\n10.decimetro\n11.centimetro\n12.milimetro\n13.micrometro\n14.nanometro\n15.picometro\n16.femtometro\n17.attometro\n\n entre com uma das opcoes: ";
cin>> opcao1;
        switch(opcao1){
case  1:
    e=18;
    break;
case 2:
    e=15;
    break;
case 3:
    e=12;
    break;
case 4:
    e=9;
    break;
case 5:
    e=6;
    break;
case 6:
    e=3;
    break;
case 7:
    e=2;
    break;
case 8:
    e=1;
    break;
case 9:
    e=0;
    break;
case 10:
    e=-1;
    break;
case 11:
    e=-2;
    break;
case 12:
    e=-3;
    break;
case 13:
    e=-6;
    break;
case 14:
    e=-9;
    break;
case 15:
    e=-12;
    break;
case 16:
    e=-15;
    break;
case 17:
    e=-18;
    break;
default:
    system("cls");
    cout<<"\n\nopcao invalida\n\n";
    system("pause");
    return 0;
        }printf("entre com o valor a ser convertido: ");
        cin>>a;

     cout<<"\n\nescolha a opcao: \n\n";
cout<<"1.exametro\n2.petametro\n3.terametro\n4.gigametro\n5.Megametro\n6.Quilometro\n7.hectometro\n8.decametro\n9.metro\n10.decimetro\n11.centimetro\n12.milimetro\n13.micrometro\n14.nanometro\n15.picometro\n16.femtometro\n17.attometro\n18.sair\n\n entre com uma das opcoes: ";
cin>> opcao2;
 switch(opcao2){
case  1:
    s=18;
    break;
case 2:
    s=15;
    break;
case 3:
    s=12;
    break;
case 4:
    s=9;
    break;
case 5:
    s=6;
    break;
case 6:
    s=3;
    break;
case 7:
    s=2;
    break;
case 8:
    s=1;
    break;
case 9:
    s=0;
    break;
case 10:
    s=-1;
    break;
case 11:
    s=-2;
    break;
case 12:
    s=-3;
    break;
case 13:
    s=-6;
    break;
case 14:
    s=-9;
    break;
case 15:
    s=-12;
    break;
case 16:
    s=-15;
    break;
case 17:
    s=-18;
    break;
case 18:
    cout<<"obrigado por usar nosso programa";
    break;
default:
    system("cls");
    cout<<"\n\nopcao invalida\n\n";
    system("pause");
    return 0;
        }
        aux=e-s;

res=a*pow(10,aux);
cout<<"\no valor comvertido e :"<<res<<"\n\n";


    system("pause");
    system("cls");
}


        long int num(int n_horas, char tipo)
{




     switch(tipo)
     {
         case 'h': return n_horas; break;

         case 'm': return n_horas * 60L; break;

         case 's': return n_horas * 3600L; break;

         default: return -1;
     }

}


        int main()
{
int a = 0;
int opcao;
do
{
    system("cls");
    system("color 07");
printf("------------ MENU ------------ ");
printf("\n---- Converso De Medidas ----");
printf("\n\n1. Converte Massa");
printf("\n2. Converte Comprimento");
printf("\n3. Converte Tempo");
printf("\n4. Converte Temperatura");
printf("\n5. SAIR");

printf("\n\nInforme a opcao desejada: ");
scanf("%d", &a);

switch(a)
{
case 1:
    system("cls");
printf("Você entrou no Menu de converte massa ");
massa();
break;
case 2:
    system("cls");
printf("Voce entrou no Menu de converte comprimento \n");
comprimento();
break;
case 3:
    system("cls");
    system("color 70");
printf("Você entrou no Menu de converte tempo \n\n");
tempo();
system("pause");
break;
case 4:
    system("cls");
    system("color 12");
printf("Você entrou no Menu de converte temperatura ");
printf("\n==========CELSIUS <-> FAHRENHEITS==========\n");
  printf("\n1-Celsius -> Fahrenheits\n2-Celsius -> Kelvin\n3-Fahrenheits -> Celsius\n4-Fahrenheits -> Kelvin\n5-Kelvin -> Celsius\n6-Kelvin -> Fahrenheits\n7-Sair\n\nOpcao.: ");
  scanf("%d", &opcao);
  switch (opcao) {
    case 1:
      Celsius_Fahrenheits();
      break;

    case 2:
      Celsius_Kelvin();
      break;

    case 3:
      Fahrenheits_Celsius();
      break;

    case 4:
      Fahrenheits_Kelvin();
      break;

    case 5:
      Kelvin_Celsius();
      break;

    case 6:
      Kelvin_Fahrenheits();
      break;

    case 7:
      printf("\nFinalizando o programa...\n");
      break;

    default:
      printf("\nErro! Opcao inexistente.\n");
      break;

  }

  return(0);



}}while (a != 5);
return 0;
system("pause");
}



