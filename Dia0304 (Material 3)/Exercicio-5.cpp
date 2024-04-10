#include<iostream>
#include<locale.h>
#include <cstring>
#include <string>

/*5. Crie uma enumeração chamada Cores para representar cores
básicas (por exemplo, vermelho, verde, azul). Em seguida, crie
um typedef para Cores chamado TipoCor. Crie um programa que
permita ao usuário escolher uma cor usando o typedef e exiba a
cor escolhida na tela.*/

using namespace std;

int main (){

setlocale(LC_ALL, "Portuguese");

int cor;

    typedef enum {vermelho, verde, azul} Cores;

    Cores TipoCor;

        cout<<"Escolha umar cor: \n 1- Vermelho\n 2- Verde \n 3- Azul"<<endl;
        cin>>cor;

        if(cor > 0 && cor < 3 ){
            TipoCor = static_cast<Cores>(cor - 1);
        }else{
            cout<<"Numero invalido!"<<endl;
        }

        cout<<"Voce escolheu: ";

        switch(TipoCor){
            case vermelho: cout<<"Vermelho!"<<endl; break;
            case verde: cout<<"Verde!"<<endl; break;
            case azul: cout<<"Azul!"<<endl; break;
        }
    }
