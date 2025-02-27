#include <iostream>
#define tamanho 5

using namespace std;

typedef struct {
int topo;
int item[tamanho];
} PILHA;

void iniciaPilha (PILHA &p) {
    p.topo = -1 ;
}

bool pilhaVazia(PILHA p) {
    if(p.topo == -1){
        return true;
    }
    else{
        return false;
    }
}

bool pilhaCheia (PILHA p){
    if (p.topo == tamanho-1){
        return true;
        }
        else{
            return false;
        }
}

void empilha(PILHA &p, int x){
    p.topo++;
    p.item[p.topo]=x;
}

int desempilha(PILHA &p){
    return (p.item[p.topo--]);
    }
int main()
{   int cont=0;
    PILHA s;

    iniciaPilha(s);

    if (pilhaVazia(s)){
        cout<<"A pilha esta vazia"<<endl;
    }
    else{
        cout<<"A pilha nao esta vazia"<<endl;
    }

    empilha(s,12);
    empilha(s,33);
    empilha(s,7);
    empilha(s,11);
    empilha(s,22);

    do{
        cout<<"Item desempilhado: "<< desempilha (s) <<endl;
    }

    while (s.topo!=-1);

    if(pilhaCheia(s)){
        cout<<"A pila esta cheia "<<endl;
    } else{
    cout<<" A pilha esta vazia";}

    return 0;
}
