#include<iostream>
#include<locale.h>

using namespace std;

typedef struct {
string nome;
int idade;
} pessoa; //apelido para a estrutura que representa uma pessoa

int main (){
setlocale(LC_ALL, "Portuguese");

pessoa pessoal;

cout<<"Digite o nome da pessoa:  ";
getline(cin, pessoal.nome);

cout<<"Digite a idade da pessoa: ";
cin>> pessoal.idade;
cout<<endl;
cout<<"Nome: "<< pessoal.nome << "\nIdade: "<< pessoal.idade <<" anos" <<endl;
return 0;
}
