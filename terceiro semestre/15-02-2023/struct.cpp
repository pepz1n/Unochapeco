//
// Created by bernardo on 15/02/23.
//
#include "iostream"
using namespace std;

struct Pessoa {
    int idade;
    string nome;
};

int main () {
    Pessoa pessoa;
    cout << "informe a idade" << endl;
    cin >> pessoa.idade;
    cout << "informe o nome" << endl;
    cin.ignore();
    getline( cin, pessoa.nome );
    cout << pessoa.nome;
}