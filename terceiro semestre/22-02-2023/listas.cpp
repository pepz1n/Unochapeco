#include "iostream"
#include "cstdlib"
#define TAM 2
using namespace std;

typedef struct strLista {
    char nome[200]{};
    char telefone[11]{};
    int n{};
    strLista *prox = nullptr;
}Lista;

void imprime(Lista *lista) {
    if (lista) {
        cout << lista->nome << endl;
        imprime(lista->prox);
    }
}

Lista *criaNo () {
    auto *lista = (Lista *)malloc(sizeof (Lista)); // malloc = new Lista

    cout << "Informe o nome: ";
    cin >> lista->nome;
    cout << "Informe o telefone: ";
    cin >> lista->telefone;
    cout << "informe o numero: ";
    cin >> lista->n;
    return lista;
};

int main () {
    Lista *raiz, *atual, *temp;

    raiz = criaNo();
    atual = raiz;
    for (int i = 0; i < TAM; ++i) {
        temp = criaNo();
        atual->prox = temp;
        atual = temp;
    }
    imprime(raiz);
}
