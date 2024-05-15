#include <iostream>
#include <stack>
#include <locale.h>

using namespace std;

int main() {
    setlocale (LC_ALL, "Portuguese");
    stack<string> cama;
    int opcao;
    cout<<"Escolha uma op��o: "<<endl;
    cout<<"1. Inserir um elemento na cama"<<endl;
    cout<<"2. Remover elemento da cama"<<endl;
    cout<<"3. Verificar o que est� em cima da cama"<<endl;
    cout<<"4. Verificar se a cama est� arrumada"<<endl;
    cout<<"5. Exibir tamanho da bagun�a"<<endl;
    cout<<"0. Sair"<<endl;
    cin>>opcao;
    do {
        switch(opcao) {
            case 1: {
                string elemento;
                cout<<"Digite o elemento:";
                cin>>elemento;
                cama.push(elemento);
                break;
            }
            case 2: {
                cama.pop();
                break;
            }
            case 3: {
                cout << "Elemento no topo da cama: " << cama.top() << endl;
                break;
            }
            case 4: {
                if(cama.empty()) {
                    cout<<"\nA cama est� vazia!";
                } else {
                    cout<<"\nA cama est� cheia!";
                }
                break;
            }
            case 5: {
                cout << "Tamanho da bagun�a: " << cama.size() << endl;
                break;
            }
            case 0: {
                cout <<"Programa encerrado!";
                break;
            }
            default: {
                cout << "Op��o inv�lida!" << endl;
                break;
            }
        }
        cout<<"Escolha uma op��o: "<<endl;
        cout<<"1. Inserir um elemento na cama"<<endl;
        cout<<"2. Remover elemento da cama"<<endl;
        cout<<"3. Verificar o que est� em cima da cama"<<endl;
        cout<<"4. Verificar se a cama est� arrumada"<<endl;
        cout<<"5. Exibir tamanho da bagun�a"<<endl;
        cout<<"0. Sair"<<endl;
        cin>>opcao;
    } while (opcao != 0);

    cout<<"Programa encerrado" <<endl;
}
