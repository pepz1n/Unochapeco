#include "iostream"
using namespace std;

struct Pessoa {
    int telefone;
    string nome;
};

void preencher (Pessoa *pessoa);
void recursividade (Pessoa pessoas[5], int x);


int main() {
    Pessoa pessoas[5];
    for (int i = 0; i < 5; ++i) {
        preencher(&pessoas[i]);
    }

    recursividade(pessoas, 0);
}

void preencher (Pessoa *pessoa) {
    cout << "Informe o nome da pessoa: " << endl;
    cin >> pessoa -> nome;
    cout << "\nInforme o numero da pessoa: " << endl;
    cin >> pessoa->telefone;
}

void recursividade (Pessoa pessoas[5], int x) {
    if (x < 5) {
        cout << "Nome: " << pessoas[x].nome << " telefone: " << pessoas[x].telefone <<endl;
    } else {
        return;
    }
    recursividade(pessoas, x+1);
}
