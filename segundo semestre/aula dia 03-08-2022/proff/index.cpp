#include <iostream>
using namespace std;
class Curso{
  public:
    int codigo;
    string desc;
    Curso(int codigo, string desc){
      this->codigo = codigo;
      this->desc = desc;
    };
    ~Curso(){};
};

class Pessoa{
  public:
    int id;
    string nome;
    Curso *cursop;
    Pessoa(int id, string nome, Curso *cursop){
      this->id = id;
      this->nome = nome;
      this->cursop = cursop;
    };
    ~Pessoa(){};
};

int main(){
  Curso c(1, "forget");
  cout << c.codigo << " " <<c.desc <<endl;
  Pessoa p(1, "Bernardo", &c);
  cout << p.id << " " << p.nome << " " << p.cursop -> desc << endl;
}