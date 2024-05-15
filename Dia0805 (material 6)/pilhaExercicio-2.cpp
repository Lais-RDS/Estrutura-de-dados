#include <iostream>
#include <stack>
#include <locale.h>

using namespace std;

int main() {
    setlocale (LC_ALL, "Portuguese");
    stack<int> pilha;
    int numero;

    cout << "Digite um número inteiro ou positivo (ou 0 para finalizar): ";
    cin >> numero;

    while (numero != 0) {
        pilha.push(numero);
        cout << "Digite um número inteiro ou positivo (ou 0 para finalizar): ";
        cin >> numero;
    }

    cout << "Números digitados na ordem inversa:\n";
    while (!pilha.empty()) {
        cout << pilha.top() << endl;
        pilha.pop();
    }


}
