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

cout<< "Digite os números do vetor: "<<endl;
for(int i=0; i <tamanho; i++){
    cin>> numeros[i];
}

cout<< "Números: ";
for (int num : numeros){
    cout<<num<< " ";
}
cout<<endl;
return 0;

}


