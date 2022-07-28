#include <iostream>
using namespace std;  

class Pessoa{
  private:
    int id,idade, ano;
    string nome;
    float peso, altura;

  public:
    Pessoa(int id, int idade, string nome, float peso, float altura, int ano){
      this->id = id;
      this->idade = idade;
      this->nome = nome;
      this->peso = peso; 
      this->altura = altura;
      this->ano = ano;
    }
    ~Pessoa(){
      cout << "passei pelo destrutor" << endl;
    }

    void listar(){
      cout << id << " " << nome << " " << idade << " " << peso << " " << altura << " " << ano << endl;
    }

    

    // Pessoa(int idp, int idadep, string nomep) {
    //   id = idp;
    //   idade = idadep;
    //   nome = nomep;
    // }

    float imc(){
      return peso/(altura*altura);

    }

    int idadeDoManinho(int anoAtual){
      return anoAtual - ano;
    }
};

int main(){

  Pessoa pes(1, 32, "Mateus",80, 1.78, 2004);
  
  int anoAtual = 0;
  // cout << pes.nome << endl;
  pes.listar();
  cin >> anoAtual;
  cout << pes.imc() <<endl;
  cout << pes.idadeDoManinho(anoAtual) << " e a idade do maninho" << endl;
}