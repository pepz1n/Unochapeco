#include <iostream>
#include <iomanip>
using namespace std;


class Motorista {
  private:
    string nome;
    string cnh;
  public:
    Motorista(){};
    ~Motorista(){};

    //Setters

    void setNome (string nome) { this -> nome = nome; };
    void setCnh (string cnh) { this -> cnh = cnh; };

    //Getters

    string getNome () {return this -> nome;};
    string getCnh () {return this -> cnh; };

    void listar () {
      cout << "Nome: " << this -> nome << " CNH: " << this -> cnh << endl;
    };

};

class Veiculo {
  protected:
    string placa;
    int ano;
    string modelo;
    string marca;

  public:
    Veiculo(){};
    ~Veiculo(){};
    
    void setPlaca (string placa) {this -> placa = placa; };
    void setAno (int ano) {this -> ano = ano; };
    void setModelo (string modelo) {this -> modelo = modelo;};
    void setMarca (string marca) {this -> marca = marca; };
    
    string getPlaca () {return this -> placa;};
    int getAno () {return this -> ano; };
    string getModelo () {return this -> modelo; };
    string getMarca () {return this -> marca; };

    void dados () {
      cout << "Placa: " << this -> placa << " ano: " << this -> ano << " Modelo: " << this -> modelo << " Marca: " << this -> marca << endl;
    };
};




class Carga : public Veiculo {
  private: 
    float tonelagem;
    string combustivel;
    float consumo;

  public: 
    Carga() : Veiculo() {};
    ~Carga () {};
    
    void setTonelagem (float tonelagem) {this -> tonelagem = tonelagem;};
    void setCombustivel (string combustivel) {this -> combustivel = combustivel;};
    void setConsumo (float consumo) {this -> consumo = consumo;};
    
    float getTonelagem () {return this -> tonelagem;};
    string getCombustivel () {return this -> combustivel;};
    float getConsumo () {return this -> consumo;}; 
    
    void dados () {
      cout << "Placa: " << this -> placa << " ano: " << this -> ano << " Modelo: " << this -> modelo << " Marca: " << this -> marca << endl;
      cout << "Tonelagem: " << this -> tonelagem << " Combustivel: " << this -> combustivel << " Consumo: " << this -> consumo << endl;
    };
    
};

class Passeio : public Veiculo {
  private: 
    int numPortas;
    float volume;
  public:
    Passeio() : Veiculo() {};
    ~Passeio() {};
    
    void setNumPortas (int numPortas) {this -> numPortas = numPortas; };
    void setVolume (float volume) {this -> volume = volume; };
    
    int getNumPortas () {return this -> numPortas;};
    int getVolume () {return this -> volume; };
    
    void dados () {
      cout << "Placa: " << this -> placa << " ano: " << this -> ano << " Modelo: " << this -> modelo << " Marca: " << this -> marca << endl;
      cout << "Num de Portas: " << this -> numPortas << " Volume: " << this -> volume << endl;
    };
    
};

class Viagem {
  private: 
    string origem;
    string destino;
    float distancia;
    string dataIda;
    string dataVolta;
    Motorista *motorista;
    Carga *carga;

  public:
    Viagem(){};
    ~Viagem(){};

    void setOrigem (string origem) { this -> origem = origem; };
    void setDestino (string destino) { this -> destino = destino; };
    void setDistancia (float distancia) { this -> distancia = distancia; };
    void setDataIda (string dataIda) { this -> dataIda = dataIda; };
    void setDataVolta (string dataVolta) { this -> dataVolta = dataVolta; };
    void setMotorista (Motorista *motorista ) { this -> motorista = motorista; };
    void setCarga (Carga *carga) {this -> carga = carga; };
    
    string getOrigem () {return this -> origem; };
    string getDestino () {return this -> destino;};
    float getDistancia () {return this -> distancia;};
    string getDataIda () {return this -> dataIda;};
    string getDataVolta () {return this -> dataVolta;};
    Motorista *getMotorista () {return this -> motorista;};
    Carga *getCarga () {return this -> carga; };

    
    //metodos:

    void listar () {
      cout << "Origem: " << this->origem << "\nDestino: " << this->destino << "\nDistancia: " << this -> distancia << "\nDataVolta: " << this -> dataVolta << "\nDataIda: " << this -> dataIda << "\nPlaca do automovel: " << this -> carga -> getPlaca() << "\nCnh: " << this -> motorista->getCnh();
    };

    void abastecer () {
      double totalNesc = this -> distancia / this -> carga -> getConsumo ();
      cout << fixed;
      cout << "O tanque precisa ter: " << setprecision(2) << totalNesc << " litros de " << this -> carga -> getCombustivel() << "." << endl;
    }    
      
};
