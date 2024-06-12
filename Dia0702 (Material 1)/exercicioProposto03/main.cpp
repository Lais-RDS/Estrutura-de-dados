#include <iostream>
#include <locale.h>
using namespace std;
/*Faça um programa em C++ que receba o número de horas trabalhadas e o valor do salário
 mínimo. Calcule e mostre o salário a receber seguindo as regras abaixo:
 a. Ahoratrabalhada vale a metade do salário mínimo;
 b. O salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da
 hora trabalhada
 c.
 Oimposto equivale a 3% do salário bruto;
 d. Osalário a receber equivale ao salário bruto menos o imposto*/


int main()
{
    setlocale(LC_ALL, "Portuguese");
    float horasTrabalhadas, valorSalarioMinimo, horaT , salarioBruto,
    imposto , salarioReceber;


    cout<<" -Horas trabalhadas: ";
    cin>>horasTrabalhadas;

    cout<<" -Salario minimo: ";
    cin>>valorSalarioMinimo;
    cout<<endl;

    horaT = valorSalarioMinimo / 2;
    salarioBruto = horasTrabalhadas * horasTrabalhadas;
    imposto = (3.0 / 100.0) * salarioBruto;
    salarioReceber = (salarioBruto - imposto);

    cout<<"O valor de horas Trabalhadas é: "<<horaT<<endl<<endl;
    cout<<"O valor do Salario Bruto é: "<<salarioBruto<<endl<<endl;
    cout<<"O valor do Imposto é: "<<imposto<<endl<<endl;
    cout<<"O valor do Salario a receber é: "<<salarioReceber<<endl<<endl;
}
