#include <iostream>
#include <locale.h>
using namespace std;
/*Elabore um programa em C++ que solicite o peso e a altura de uma determinada pessoa.
 Ap�s a digita��o, exibir se esta pessoa est� ou n�o com seu peso ideal, conforme tabela
 abaixo*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float peso, altura, imc;


    cout<<"Entre com seu peso: ";
    cin>>peso;
    cout<<"Entre com sua altura: ";
    cin>>altura;
    imc = peso / (altura*altura);

    cout<<"Seu imc � "<<imc<<endl;

    if(imc < 20){
        cout<<"Esta abaixo do peso! ";
    }
    else if(imc >= 25){
        cout<<"Esta acima do peso! ";
    }
    else {
        cout<<"Esta no seu peso ideal! ";
    }
}
