#include<iostream>
/*Faça um programa em C++ para ler um valor N qualquer (que será o
tamanho dos vetores). Após, ler dois vetores A e B (de tamanho N cada um)
e depois armazenar em um terceiro vetor Soma a soma dos elementos do
vetor A com os do vetor B (respeitando as mesmas posições) e escrever o
vetor Soma.*/

using namespace std;

int main(){
    int tamanhoVetor;

    cout<<"Entre com o tamanho dos vetores: ";
    cin>>tamanhoVetor;

    int vetA[tamanhoVetor] ,vetB[tamanhoVetor] ,somaVetores[tamanhoVetor] ;

    for(int i=0;i<tamanhoVetor;i++){
    cout<<"valor do vetorA em "<< i <<" :";
    cin>>vetA[i];
    cout<<"valor do vetorB em "<< i <<" :";
    cin>>vetB[i];
    somaVetores[i] = vetA[i] + vetB[i];

    }
    cout<<"\n vetor soma: ";
    for (int i=0;i<tamanhoVetor;i++){

        cout<< somaVetores[i]<<" ";
     }


}
