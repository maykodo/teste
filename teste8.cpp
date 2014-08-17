#include<iostream>
#include<cstdlib>


using namespace std;

main(){

float x,y;
float adic, subtrac, mult, div;
int op;


system ("COLOR FC");
cout << "Qual Operacao voce deseja realizar: " << endl;
cout << "==============******===============" << endl;
cout << "(1) Adicao" << endl;
cout << "(2) Subtracao" << endl;
cout << "(3) Multiplicacao" << endl;
cout << "(4) Divisao" << endl;
cout << endl;
cout << "Voce escolheu a opcao: ";
cin >> op;
cout << endl;


if (op > 4 || op < 1){
cout << "opcao invalida" ;
}
else{
cout << endl << "Digite um numero: " ;
cin >> x;
cout << "Digite outro numero: " ;
cin >> y;
}

switch(op){
case 1:
system("COLOR F3");
adic = x + y;
cout << "Total: " << adic << endl << endl << endl;
break;

case 2:
system("COLOR F4");
subtrac = x - y;
cout << "Total: " << subtrac << endl << endl << endl;
break;

case 3:
system("COLOR F0");
mult = x * y;
cout << "Total: " << mult << endl << endl << endl;
break;

case 4:
system("COLOR F1");
div = x / y;
cout << "Total: " << div << endl << endl << endl;
break;

default:
cout << "Opcao invalida!" << endl;
break;

}



}
