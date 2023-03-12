#include "iostream"
#include "cstdlib"
#define TAM 4
using namespace std;

typedef struct strLista {
    int n = 0;
    strLista *prox = nullptr;
} Lista;

void print (Lista *l) {
    if (l) {
        cout << "Numero: " << l->n << endl;
        print(l->prox);
    }
}

Lista *tirar(Lista *l, int posicao) {
    Lista *primeiro = l;
    if (posicao == 0) {
        return l->prox;
    }
    int cont = 0;
    while (l) {
        if (cont + 1 == posicao) {
            l->prox = l->prox->prox;
        }
        cont++;
        l = l->prox;
    }
    return primeiro;
}

int main () {
    Lista *primeiro, *atual, *temp;

    primeiro = (Lista *) malloc(sizeof(Lista));
    primeiro->n = 1;
    atual = primeiro;

    for (int i = 0; i < TAM; ++i) {
        temp = (Lista *) malloc(sizeof(Lista));
        atual->prox = temp;
        cout << "informe um numero: ";
        cin >> temp->n;
        atual = atual->prox;
    }
    print(primeiro);

    cout << "informe a posicao que deseja retirar: ";
    int pos;
    cin >> pos;

    primeiro = tirar(primeiro, pos);
    print(primeiro);
}