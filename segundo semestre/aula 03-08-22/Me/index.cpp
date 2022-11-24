#include <iostream>
using namespace std;

class Proprietario{
  public:
    string cpf;
    string nome;
    string cidade;
    string uf;
    Proprietario(string cpf, string nome, string cidade, string uf){
      this->cpf = cpf;
      this->nome = nome;
      this->cidade = cidade;
      this->uf = uf;
    };
    ~Proprietario(){};
};

class Automovel{
  public:
    string placa;
    int ano;
    string marca;
    string modelo;
    Proprietario *automovelp;
    Automovel(string placa, int ano, string marca, string modelo, Proprietario *automovelp){
        this->placa = placa;
        this->marca = marca;
        this->modelo = modelo;
        this->automovelp = automovelp;
        this->ano = ano;
    };
    ~Automovel(){
      
    };
};


int main(){
  Proprietario p("089.225.189-10", "Bernardo", "Xaxim", "SC");
  cout << p.cpf << endl;
  Automovel corsa("ark-4457", 1991, "Chevrolet", "corsa", &p);
  cout << corsa.marca << " " << corsa.modelo << " " << corsa.ano << " " << corsa.placa << " Pertence a: " << corsa.automovelp ->nome << ", Com CPF: " << corsa.automovelp-> cpf << endl; 

}