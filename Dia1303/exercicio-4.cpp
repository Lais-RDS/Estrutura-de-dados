#include <iostream>
/*
Faça um programa em C++ para ler 20 números e armazenar em um vetor.
Após a leitura total dos 20 números, o algoritmo deve escrever esses 20
números lidos na ordem inversa.
*/

using namespace std;

#define tamanho 20
int main()
{
    int vet[tamanho];
    int i;

    for(int i = 0; i <tamanho;i++)
    {
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    for(int i = tamanho - 1; i >= 0; i--)
    {
        cout << vet[i] << " ";
    }

}
