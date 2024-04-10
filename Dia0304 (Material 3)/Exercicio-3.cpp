#include<iostream>
#include<locale.h>
#include <cstring>
#include <string>

/*3. Crie uma estrutura chamada Endereco que armazene os
campos rua, cidade e CEP. Em seguida, crie um typedef para
Endereco chamado TipoEndereco. Crie um programa que solicite
ao usuário que insira informações de endereço e as armazene
em uma variável do tipo TipoEndereco.*/

using namespace std;

int main (){

setlocale(LC_ALL, "Portuguese");

 struct Endereco{
        string rua, cidade, cep;
    };

    typedef Endereco TipoEndereco;

    TipoEndereco endereco;

    for(int i = 0; i < 1; i++ ){
        cout<<"Digite a rua: ";
        cin.ignore();

        getline(cin, endereco.rua);

        cout<<"Digite a cidade: ";
        cin.ignore();

        getline(cin, endereco.cidade);

        cout<<"Digite a cep: ";
        cin>>endereco.cep;
    }

    for(int i = 0; i < 1; i++ ){

        cout<<"rua: "<<endereco.rua<<endl;
        cout<<"cidade: "<<endereco.cidade<<endl;
        cout<<"cep: "<<endereco.cep<<endl;
    }
}
