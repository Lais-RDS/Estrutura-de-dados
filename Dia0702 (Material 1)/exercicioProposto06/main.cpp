#include <iostream>
#include <locale.h>
using namespace std;
/* Escreva um programa em C++ que mostre o quadrado dos números inteiros no intervalo de
 1 a 20*/

int main()
{   setlocale(LC_ALL, ("Portuguese"));
    int intervalo=20;
    for(int i=0; i<=intervalo;i++){
        int quadrado;
        quadrado = i*i;
        cout<<"O quadrado de "<<i<<" é "<<quadrado <<endl;

    }

}
