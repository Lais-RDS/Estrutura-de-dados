#include<iostream>
#include<locale.h>
#include <cstring>
#include <string>

/*2. Suponha que você está desenvolvendo um programa para armazenar
informações sobre animais em um zoológico. Crie uma estrutura chamada
Animal que deve armazenar as seguintes informações sobre cada animal:

Nome do animal (string)
Espécie do animal (string)
Idade do animal (int)
Peso do animal em kg (float)

Em seguida, crie um typedef para uma lista de animais chamada ListaAnimais,
que deve ser um vetor de 10 elementos do tipo Animal.
Por fim, crie um programa que pede ao usuário para digitar os dados de 10
animais e armazena esses dados em uma variável do tipo ListaAnimais.
Ao final, o programa deve exibir os dados de cada um dos 10 animais na tela.*/

using namespace std;

int main (){

setlocale(LC_ALL, "Portuguese");

 struct Animal{

        string nome, especie;
        int idade;
        float peso;

    };

    const int numeroAnimais = 10;
    typedef Animal ListaAnimais[numeroAnimais];

    ListaAnimais animais;

    for(int i = 0; i < 10; i++){

        cout<<"Digite o nome: ";
        cin>>animais[i].nome;

        cout<<"Digite a especie: ";
        cin>>animais[i].especie;

        cout<<"Digite a idade: ";
        cin>>animais[i].idade;

        cout<<"Digite o peso: ";
        cin>>animais[i].peso;

    }

    for(int i = 1; i <=10; i++){

        cout<<"Animal "<<i<<" nome: "<<animais[i].nome<<endl;
        cout<<"Animal "<<i<<" especie: "<<animais[i].especie<<endl;
        cout<<"Animal "<<i<<" idade: "<<animais[i].idade<<endl;
        cout<<"Animal "<<i<<" peso: "<<animais[i].peso<<endl;
    }


}
