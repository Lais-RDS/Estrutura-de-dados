#include <iostream>
#include <locale.h>
using namespace std;
/* Construa um programa em C++ que calcule o novo sal�rio de um funcion�rio. Considere
 que o funcion�rio dever� receber um reajuste de 15% caso seu sal�rio seja menor que
 1000. Se o sal�rio for maior ou igual a 1000, mas menor ou igual a 1500, o reajuste deve ser
 de 10%. Caso o sal�rio seja maior que 1500, o reajuste deve ser de 5%*/

int main()
{   setlocale(LC_ALL, "Portuguese");
    int novoSalario;
    cout<<"Entre com o Salario: ";
    cin>>novoSalario;

    if(novoSalario <= 1000){
        novoSalario = novoSalario + (novoSalario*0.15);
        cout<<"Seu novo salario �: "<<novoSalario<<endl;
    }
    else if(novoSalario>=1000 && novoSalario<=1500){
        novoSalario = novoSalario + (novoSalario*0.10);
        cout<<"Seu novo salario �: "<<novoSalario<<endl;
    }
    else if (novoSalario>1500){
        novoSalario = novoSalario + (novoSalario*0.5);
        cout<<"Seu novo salario �: "<<novoSalario<<endl;
    }
    else{
    cout<<"Insira um salario Valido";}

}
