#include <iostream>
using namespace std;
class pessoa
{
protected:
  int id;
  string nome;

public:
  pessoa() {}
  ~pessoa() {}
  void setId(int id)
  {
    this->id = id;
  }
  void setNome(string nome)
  {
    this->nome = nome;
  }
  int getId()
  {
    return id;
  }
  string getNome()
  {
    return nome;
  }
  void mostrar()
  {
    cout << "Codigo:" << getId() << " Nome: " << getNome() << endl;
  }
};
class atleta : public pessoa
{
private:
  float peso, altura;

public:
  void setPeso(float peso)
  {
    this->peso = peso;
  }
  void setAltura(float altura)
  {
    this->altura = altura;
  }
  float getPeso()
  {
    return peso;
  }
  float getAltura()
  {
    return altura;
  }

  float imc()
  {
    float i = peso / (altura * altura);
    return i;
  }

  void listar()
  {
    cout << "Codigo:" << id << " Nome: " << nome << " "
         << " Peso: " << peso << " Altura: " << altura << " " << imc() << endl;
  }
};

int main()
{
  atleta a;
  a.setId(1200);
  a.setNome("Pedro");
  a.setPeso(90);
  a.setAltura(1.89);
  a.mostrar();
  cout << a.imc() << endl;
  a.listar();
}