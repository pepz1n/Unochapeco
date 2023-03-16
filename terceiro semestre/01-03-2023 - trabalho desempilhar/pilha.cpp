#include "iostream"
#include "cstdlib"
#define  TAM 4
bool primeiro = true;
using namespace std;

typedef struct s_pilha{
    int cod = 0;
    s_pilha *p = nullptr;
}Pilha;

Pilha *fundo, *topo;
int tamP = 0;

void inserir (int x) {
    auto *p = (Pilha *)malloc(sizeof (Pilha));
    p->cod = x;
    if (primeiro) {
        fundo = p;
        primeiro = false;
    } else {
        topo->p = p;
    }
    tamP++;
}

void pesquisa (int x, Pilha *p, int cont) {
    if (p->cod == x) {
        cout << "Numero: " << x << " esta na posicao " << cont-1 << " da pilha" << endl;
        return;
    }
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

Pilha *ultimo (Pilha *pilha) {
    while (pilha) {
        if (!pilha->p) {
            return  pilha;
        }
        pilha = pilha->p;
    }
    return nullptr;
}

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
        }
        pilha_ = pilha_->p;
    }
    return 0;
}

void push (int x, Pilha *pilha) {
    Pilha *p, *topoMeio = ultimo(pilha);

    p = (Pilha *) malloc(sizeof (Pilha));
    p->cod = x;

    if (pilha->cod) {
        topoMeio->p = p;
    } else {
        pilha->cod = x;
    }
}

void removerMeio (Pilha *pilha, int valor) {
    auto *aux = (Pilha *) malloc(sizeof(Pilha));
    while (true) {
        int ultimoPilha = ultimo(pilha)->cod;
        if (ultimoPilha == valor) {
            pop(pilha);
            while (aux->cod != 0) {
                int ultimoValor = pop(aux);
                push(ultimoValor, pilha);
            }
            break;
        } else {
            pop(pilha);
            push(ultimoPilha,aux);
        }
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
    cout << "Digite um valor para remover: ";
    cin >> x;
    removerMeio(fundo, x);
    imprimir(fundo);
}
