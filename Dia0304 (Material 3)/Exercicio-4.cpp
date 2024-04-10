#include<iostream>
#include<locale.h>
#include <cstring>
#include <string>

/*4. Crie um typedef para um vetor de inteiros chamado
VetorInteiros. Em seguida, crie um programa que declare e
inicialize um vetor de 5 inteiros usando o typedef e exiba os
valores na tela.*/

using namespace std;

int main (){

setlocale(LC_ALL, "Portuguese");

  typedef int vetorInteiro;

    vetorInteiro vetor[5]={1,2,3,4,5};

    for(int i = 0; i < 5; i++){
        cout<<vetor[i]<<endl;
    }
}
