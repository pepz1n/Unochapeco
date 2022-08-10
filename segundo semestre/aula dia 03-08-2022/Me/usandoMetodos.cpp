#include <iostream>
using namespace std;

class Pessoa{
  private:
    int id, idade;
    string nome;
  public:
    Pessoa(){}
    ~Pessoa(){}

    //sets
    void setId(int id){
      this->id = id;
    };
    void setNome(string nome){
      this->nome = nome;
    };
    void setIdade(int idade){
      this->idade = idade;
    };
    
    //gets
    int getId() { 
      return id;
    };
    string getNome() { 
      return nome; 
    };
    int getIdade() { 
      return idade;
    }; 
};
class Automovel{ 
  private: 
    string placa;
    Pessoa *prop;
  public:
    Automovel(){}
    ~Automovel(){}

    void setPlaca(string placa){
      this->placa = placa;
    };
    void setProp(Pessoa *prop){
      this->prop = prop;
    }
    Pessoa getProp(){
      return *prop;
    }
    string getPlaca() { 
      return placa;
    };
};




int main(){
  Pessoa pes;
  pes.setId(1);
  pes.setIdade(17);
  pes.setNome("Bernardo");

  Automovel carro;
  carro.setPlaca("ark-457");
  carro.setProp(&pes);

  cout << carro.getProp().getNome() << endl;
  cout << pes.getIdade() << endl;
  cout << pes.getNome() << endl;
  cout << pes.getId() << endl;
}