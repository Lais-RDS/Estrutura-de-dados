#include<iostream>
#include<locale.h>
#include<vector>

using namespace std;

typedef vector<int> VetorInteiros;


int main (){

setlocale(LC_ALL, "Portuguese");
int tamanho;

cout<<"Digite o tamanho do vetor: ";
cin>>tamanho;

VetorInteiros numeros(tamanho);

cout<< "Digite os n�meros do vetor: "<<endl;
for(int i=0; i <tamanho; i++){
    cin>> numeros[i];
}

cout<< "N�meros: ";
for (int num : numeros){
    cout<<num<< " ";
}
cout<<endl;
return 0;

}


