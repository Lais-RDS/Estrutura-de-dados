#include <iostream>
#include <locale.h>
using namespace std;
/*Fa�a um programa em C++ que receba o n�mero de horas trabalhadas e o valor do sal�rio
 m�nimo. Calcule e mostre o sal�rio a receber seguindo as regras abaixo:
 a. Ahoratrabalhada vale a metade do sal�rio m�nimo;
 b. O sal�rio bruto equivale ao n�mero de horas trabalhadas multiplicado pelo valor da
 hora trabalhada
 c.
 Oimposto equivale a 3% do sal�rio bruto;
 d. Osal�rio a receber equivale ao sal�rio bruto menos o imposto*/


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

    cout<<"O valor de horas Trabalhadas �: "<<horaT<<endl<<endl;
    cout<<"O valor do Salario Bruto �: "<<salarioBruto<<endl<<endl;
    cout<<"O valor do Imposto �: "<<imposto<<endl<<endl;
    cout<<"O valor do Salario a receber �: "<<salarioReceber<<endl<<endl;
}
