#include <iostream>

using namespace std;
/* Escreva um programa em C++ que escreva todos os n�meros m�ltiplos de 5, no intervalo
 de 1 a 500 */

int main()
{
    int intervalo=500;

    for(int i=1; i<=intervalo;i++){
        if(i%5==0){
            cout<<i<<", ";
        }
    }
}
