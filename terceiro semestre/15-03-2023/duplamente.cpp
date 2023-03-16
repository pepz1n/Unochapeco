#include "iostream"
#include "cstdlib"
using namespace std;

typedef struct strLista {
    int n = 0;
    strLista *prox = nullptr;
    strLista *ant = nullptr;
}Lista;

void imprimir (Lista *);
Lista *tirar (Lista *, int);

int main () {
    Lista *raiz, *atual, *temp;
    raiz = (Lista *) malloc(sizeof(Lista));
    raiz->n = 11;
    atual = raiz;
    for (int i = 0; i < 3; ++i) {
        temp = (Lista *) malloc(sizeof(Lista));
        temp -> n = (atual->n+1);
        temp->ant = atual;
        atual->prox = temp;
        atual = temp;
    }
    imprimir(raiz);
    raiz = tirar(raiz, 14);
    cout << "\n\nLista nova:" <<endl;
    imprimir(raiz);
}

void imprimir(Lista *temp) {
    Lista *ant = temp->ant;
//    if (ant) {
//        cout << "Anterior: " << ant->n << endl;
//    }
    cout << "Atual: " << temp->n << endl;
    if (temp->prox) {
        imprimir(temp->prox);
    }
}

Lista *tirar (Lista *lista, int valor) {
    Lista *flag = lista;
    if (lista->n == valor) {
        (lista->prox)->ant = nullptr;
        return lista->prox;
    }
    while (lista) {
        if (lista->prox->n == valor) {
            lista->prox = lista->prox->prox;
            if (lista->prox) {
                lista->prox->ant = lista;
            }
            return flag;
        }
        lista = lista->prox;
    }
    return flag;
}