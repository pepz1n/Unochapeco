#include "iostream"
#include "cstdlib"
using namespace std;

typedef struct Estrutura {
    int n;
    Estrutura *esq = nullptr, *dir = nullptr;
}Arvore;

Arvore *criaNo(int);
void imprimir(Arvore *);

int main () {
    Arvore *raiz, *p, *q;
    int valor;
    raiz = criaNo(10);
    for (int i = 0; i < 4; ++i) {
        q = raiz;
        p = raiz;
        cout << "Digite um valor: ";
        cin >> valor;
        while (valor != p->n) {
            p = q;
            if (valor < p->n) {
                q = p->esq;
            } else {
                q = p->dir;
            }
        }
        if (valor == p->n) {
            cout << "valor existente " << endl;
            i--;
        }else if (valor < p->n) {
            p->esq = criaNo(valor);
        } else {
            p->dir = criaNo(valor);
        }
    }
    imprimir(raiz);
}

Arvore *criaNo(int x) {
    Arvore *temp;
    temp = (Arvore *) malloc(sizeof(Arvore));
    temp->n = x;
    return temp;
}

void imprimir(Arvore *p) {
    cout << p->n << endl;
    if (p->esq) {
        imprimir(p->esq);
    }
    if (p->dir) {
        imprimir(p->dir);
    }
}
