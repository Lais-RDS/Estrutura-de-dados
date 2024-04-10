#include<iostream>
#include<locale.h>
#include <cstring>
#include <string>

/*1. Crie uma estrutura chamada pessoa que seja capaz de
armazenar o nome, o endereço, o CPF e a idade de 5
pessoas.*/

using namespace std;

int main (){

setlocale(LC_ALL, "Portuguese");
  typedef struct {
        string nome, endereco, cpf;
        int idade;

    } Pessoa;

    Pessoa pessoa[5];

    for(int i = 0; i < 5; i++){

        cout<<"Digite o nome:";
        cin>>pessoa[i].nome;

        cout<<"Digite o endereco:";
        cin>>pessoa[i].endereco;

        cout<<"Digite o cpf:";
        cin>>pessoa[i].cpf;

        cout<<"Digite o idade:";
        cin>>pessoa[i].idade;

    }

    cout<<"Os dados foram salvos!"<<endl;

//para imprimir
     for(int i = 0; i < 5; i++){

        cout<<"nome da pessoa: "<<pessoa[i].nome<<endl;

        cout<<" endereço: "<<pessoa[i].endereco;

        cout<<"\n cpf: "<<pessoa[i].cpf;

        cout<<"\n idade: "<<pessoa[i].idade<<endl;
    }


}
