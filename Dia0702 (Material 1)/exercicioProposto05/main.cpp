#include <iostream>
#include <locale.h>
using namespace std;
/*Construa um programa em C++ que calcule e apresente quanto deve ser pago por um
 produto considerando a leitura do pre�o de etiqueta (PE) e o c�digo da condi��o de
 pagamento (CP). Utilize para os c�lculos a tabela de condi��es de pagamento a seguir:
 1 � vista em dinheiro ou cheque, com 10% de desconto
 2 � vista com cart�o de cr�dito, com 5% de desconto
 3 Em 2 vezes,pre�o normal de etiqueta sem juros
 4 Em 3 vezes, pre�o de etiqueta com acr�scimo de 10% */

int main()
{   setlocale(LC_ALL, "Portuguese");
    int opcao,valor;

    cout<<"---------------------op��es------------------"<<endl;
    cout<<"1 � vista em dinheiro ou cheque, com 10% de desconto"<<endl;
    cout<<"2 � vista com cart�o de cr�dito, com 5% de desconto"<<endl;
    cout<<"3 Em 2 vezes,pre�o normal de etiqueta sem juros"<<endl;
    cout<<"4 Em 3 vezes, pre�o de etiqueta com acr�scimo de 10%"<<endl<<endl;
    cout<<"Digite a op��o: ";
    cin>>opcao;
    cout<<"Digite o valor: ";
    cin>>valor;

    switch(opcao){
    case 1:
        cout<<"Total: "<<valor - (valor*0.10)<<endl;
        break;
    case 2:
        cout<<"Total: "<<valor - (valor*0.5)<<endl;
        break;
    case 3:
        cout<<"Total duas vezes de: "<<valor/2<<endl;
        break;
    case 4:
        cout<<"Total: 3 vezes de: "<<valor/3 +(valor*0.10)<<endl;
        break;
    default:
        cout<<"Insira uma op��o valida!";

    }
}
