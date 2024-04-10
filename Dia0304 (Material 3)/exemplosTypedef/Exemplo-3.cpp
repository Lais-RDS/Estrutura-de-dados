#include<iostream>
#include<locale.h>

using namespace std;

typedef enum {SEGUNDA, TERCA, QUARTA, QUINTA, SEXTA, SABADO, DOMINGO} DiaDaSemana; //apelido para uma enumeracao


int main (){

setlocale(LC_ALL, "Portuguese");

int dia;

cout<<"Digite um numero de (1 a 7): ";
cin>>dia;

DiaDaSemana hoje;

if (dia>= 1 && dia <=7){
    hoje = static_cast<DiaDaSemana>(dia - 1);
} else {
    cout<<"N�mero do dia inv�lido! ";
}

cout <<"hoje �: ";

switch (hoje){
 case SEGUNDA: cout<<"Segunda Feira"; break;
 case TERCA: cout<<"Ter�a Feira"; break;
 case QUARTA: cout<<"Quarta Feira"; break;
 case QUINTA: cout<<"Quinta Feira"; break;
 case SEXTA: cout<<"Sexta Feira"; break;
 case SABADO: cout<<"Sabado "; break;
 case DOMINGO: cout<<"Domingo"; break;
}
return 0;

}
