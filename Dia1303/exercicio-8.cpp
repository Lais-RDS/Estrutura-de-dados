#include <iostream>
#include <locale.h>
/*8. Escreva um programa em C++ que crie um array de 5 inteiros, preencha-o
com valores fornecidos pelo usuário e, em seguida, calcule a média dos
valores usando ponteiros.*/

using namespace std;

int main() {
    setlocale (LC_ALL,"Portuguese");
    const int SIZE = 5;
    int array[SIZE];


    cout << "Digite " << SIZE << " valores inteiros:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << "Nota " << i + 1 << ": ";
        cin >> *(array + i);
    }

    int soma = 0;
    for (int i = 0; i < SIZE; ++i) {
        soma += *(array + i);
    }
    float media = (soma) / SIZE;

    cout << "A média dos valores é: " << media << endl;


}
