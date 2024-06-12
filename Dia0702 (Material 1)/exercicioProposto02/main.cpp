#include <iostream>

using namespace std;
/* Elaborar um programa em C++ em que dada a idade de um nadador, classifique-o em uma
 das seguintes categorias: infantil A (de 5 a 7 anos), infantil B (de 8 a 10 anos), juvenil A (de
 11 a13anos), juvenil B (14 a 17 anos) e senior (maior que 17 anos)
*/
int main()
{
    int idade;
    cout << "Entre com a Idade do nadador: ";
    cin>>idade;

    if(idade>=5 && idade <=7){
        cout<<"O nadador esta na categoria: Infantil A";
    }else if (idade >=8 && idade <=10){
        cout<<"O nadador esta na categoria: Infantil B";
    }else if (idade >=11 && idade <=13){
        cout<<"O nadador esta na categoria: juvenil A";
    }else if (idade >=11 && idade <=13){
        cout<<"O nadador esta na categoria: juvenil B";
    }else if (idade > 17){
        cout<<"O nadador esta na categoria: Senior";
    }else{
        cout<<"o nadador não possui idade suficiente ou idade INVALIDA"<<endl;
    }


}
