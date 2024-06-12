#include <iostream>
#include <locale.h>
using namespace std;
/*Construa um programa em C++ que calcule e apresente quanto deve ser pago por um
 produto considerando a leitura do preço de etiqueta (PE) e o código da condição de
 pagamento (CP). Utilize para os cálculos a tabela de condições de pagamento a seguir:
 1 À vista em dinheiro ou cheque, com 10% de desconto
 2 À vista com cartão de crédito, com 5% de desconto
 3 Em 2 vezes,preço normal de etiqueta sem juros
 4 Em 3 vezes, preço de etiqueta com acréscimo de 10% */

int main()
{   setlocale(LC_ALL, "Portuguese");
    int opcao,valor;

    cout<<"---------------------opções------------------"<<endl;
    cout<<"1 À vista em dinheiro ou cheque, com 10% de desconto"<<endl;
    cout<<"2 À vista com cartão de crédito, com 5% de desconto"<<endl;
    cout<<"3 Em 2 vezes,preço normal de etiqueta sem juros"<<endl;
    cout<<"4 Em 3 vezes, preço de etiqueta com acréscimo de 10%"<<endl<<endl;
    cout<<"Digite a opção: ";
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
        cout<<"Insira uma opção valida!";

    }
}
