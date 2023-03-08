#include "iostream"
#include "cstdlib"
#include "stdlib.h"
#define  TAM 4
bool primeiro = true;
using namespace std;

typedef struct s_pilha{
    int cod;
    s_pilha *p = nullptr;
}Pilha;

Pilha *fundo, *topo;
int tamP = 0;

void inserir (int x) {
    Pilha *p;
    p = (Pilha *)malloc(sizeof (Pilha));
    p->cod = x;
    if (primeiro) {
        fundo = p;
        primeiro = false;
    } else {
        topo->p = p;
    }
    topo = p;
    tamP++;
}

void pesquisa (int x, Pilha *p, int cont) {
    if (p->cod == x) {
        cout << "Numero: " << x << " esta na posicao " << cont << " da pilha" << endl;
        return;
    };
    cont--;
    if (p->p != nullptr) {
        pesquisa(x, p->p, cont);
    }
}

void imprimir (Pilha *p) {
    if(p->p != nullptr) {
        imprimir(p->p);
    }
    cout << p->cod << endl;
}

//void remover (Pilha *p) {
//    if (p->p == nullptr) {
//        p = nullptr;
//    }else if (p->p->p == nullptr) {
//        p->p = nullptr;
//    }
//    if(p->p != nullptr) {
//        remover(p->p);
//    }
//}

int pop (Pilha *pilha_) {
    int valor;
    while (pilha_) {

        if (!pilha_->p) {
            valor = pilha_->cod;
            pilha_->cod = 0;
            return valor;
        }
        if (!(pilha_->p)->p) {
            valor = (pilha_->p)->cod;
            delete (pilha_->p)->p;
            pilha_->p = nullptr;
            return valor;
        };
        pilha_ = pilha_->p;
    }
}

int main () {
    int i, cod, x;
    for (i = 0; i < TAM; ++i) {
        cout << "Digite um elemento: ";
        cin >> cod;
        inserir(cod);
    }
    imprimir(fundo);

    cout << "Digite um elemento para pesquisar: ";
    cin >> x;

    pesquisa(x, fundo, TAM);
    cout << "\n\n";
    pop(fundo);
    imprimir(fundo);
}