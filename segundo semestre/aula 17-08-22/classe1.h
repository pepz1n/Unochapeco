#include <iostream>
using namespace std;
class Pessoa
{
protected:
  int id;
  string name, cidade, uf;

public:
  Pessoa(int id, string name, string cidade, string uf)
  {
    this->id = id;
    this->cidade = cidade;
    this->uf = uf;
    this->name = name;
  }
  ~Pessoa()
  {
    // delete this;
  }
  void mostrar()
  {
    cout << "Codigo: " << id << "\nNome: " << name << endl;
  }
};
class Atleta : public Pessoa
{
public:
  float peso, altura;
  Atleta(int id, string name, float peso, float altura, string cidade, string uf) : Pessoa(id, name, cidade, uf)
  {
    this->id = id;
    this->cidade = cidade;
    this->uf = uf;
    this->name = name;
    this->altura = altura;
    this->peso = peso;
  }
  ~Atleta() {}
  float imc()
  {
    return peso / (altura * altura);
  }

  void listar()
  {
    cout << "Codigo: " << id << "\nNome: " << name << endl;
    cout << "Peso: " << peso << "\nAltura: " << altura << endl;
    cout << "Cidade: " << cidade << "\nUF: " << uf << endl;
    cout << "IMC: " << imc() << endl;
  }
};