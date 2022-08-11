/*
Universidade Comunitária da Região de Chapecó – UNOCHAPECÓ
Escola Politécnica – Ciência da Computação/Sistema de Informação
Profa. Monica Tissiani De Toni Pereira
Exercício de Programação Orientada a Objetos com C++
///////////////////////////////////////////////////////
O estudo de caso abaixo descreve parcialmente os requisitos para um sistema de
computador de uma oficina mecânica, que faz consertos de veículos de
propriedade de pessoas jurídicas.
Os tipos de veículos podem ser pequenos veículos de carga, como picapes e
furgões, caminhões com vários tipos de eixos e ônibus também.
As informações necessárias sobre os veículos são: chassi, placa, tipo de
combustível, tipo de veículo e empresa proprietária.
Sobre as empresas as informações necessárias são: cnpj, nome, telefone, endereço,
nome de uma pessoa de contato e cidade. Nem todas as empresas situam-se na
mesma cidade da oficina mecânica.
Sobre as cidades é preciso saber somente o seu nome e o estado da federação.
Cada revisão de veículo tem data inicial e data final, uma pessoa responsável, o
veículo, valor final e consertos necessários. Os consertos podem ser definidos
como um único atributo da classe revisão, a fim de facilitar a implementação
deste estudo de caso.
Implementar as classes Veiculo, Empresa, Cidade, Revisao.
Fazer as associações necessárias das classes:
• Veiculo e Empresa. Uma empresa pode ter muitos veículos e um veículo é de
uma única empresa.
• Empresa e Cidade. Uma cidade pode ter mais de uma empresa, porém, uma
empresa situa-se em uma única cidade.
• Veiculo e Revisao. Um veículo pode ter muitas revisões, mas um processo de
revisão é feito em um único veículo.
Implementar um bloco principal de modo a demostrar os seguintes dados de um
veículo em revisão:
Placa do veículo, data inicial e final da revisão, nome da empresa, cidade,
consertos realizados e valor total.
O estudo de caso pode ser aprimorado criando-se uma classe para definir os tipos
de consertos, com seus valores, por exemplo. Esta etapa é opcional.
Implemente as classes com método construtor vazio, utilizando somente métodos
“setters” e “getters”.
*/


#include <iostream>
using namespace std;
class Cidade{
  private:
    string uf, cidade;
  public:
    Cidade(){}
    ~Cidade(){
      delete this;
    }

    //sets
    void setUf(string uf){
      this->uf = uf;
    };
    void setCidade(string cidade){
      this->cidade = cidade;
    };

    //get
    string getUf(){
      return uf;
    };

    string getCidade(){
      return cidade;
    };
};

class Empresa{
  private:
    string nome, endereco, contatoNome;
    int cnpj, telefone;
    Cidade *cidade;
  public:
  
    //sets
    void setNome(string nome){
      this->nome = nome;
    };
    void setEndereco(string endereco){
      this->endereco = endereco;
    };
    void setContatoNome(string contatoNome){
      this->contatoNome = contatoNome;
    };
    void setTelefone(int telefone){
      this->telefone = telefone;
    };
    void setCnpj(int cnpj){
      this->cnpj = cnpj;
    };
    void setCidade(Cidade *cidade){
      this->cidade = cidade;
    };

    //get

    string getNome(){
      return nome;
    };
    string getEndereco(){
      return endereco;
    };
    string getContatoNome(){
      return contatoNome;
    };
    int getTelefone(){
      return telefone;
    };
    int getCnpj(){
      return cnpj;
    };
    Cidade getCidade(){
      return *cidade;
    }
};  

class Veiculo{
  private:
    string chassi, placa, tipoCombustivel, tipoVeiculo;
    Empresa *veiculoP;
  public:
    //sets
    void setChassi(string chassi) {
      this->chassi = chassi;
    };
    void setPlaca(string placa) {
      this->placa = placa;
    };
    void setTipoCombustivel(string tipoCombustivel) {
      this->tipoCombustivel = tipoCombustivel;
    };
    void setTipoVeiculo(string tipoVeiculo) {
      this->tipoVeiculo = tipoVeiculo;
    };
    void setVeiculoP(Empresa *veiculoP){
      this->veiculoP = veiculoP;
    };

    //gets
    string getChassi(){
      return chassi;
    };
    string getPlaca(){
      return placa;
    };
    string getTipoCombustivel(){
      return tipoCombustivel;
    };
    string getTipoVeiculo(){
      return tipoVeiculo;
    };
    Empresa getVeiculoP(){
      return *veiculoP;
    }
};

class Consertos {
  private:
    string tipoConserto;
    float valor;
  public:
    void setTipoConserto(string tipoConserto){
      this ->tipoConserto = tipoConserto;
    };
    void setValor(float valor){
      this ->valor = valor;
    };

    //get

    string getTipoConserto(){
      return tipoConserto;
    };
    float getValor(){
      return valor;
    };
};

class Revisao{
  private:
    string dataInicio, dataFim, nomeResponsavel;
    Consertos *consertosNescessario, *valorFim;
    Veiculo *veiculo;
  public:
    //sets
    void setDataInicio(string dataInicio){
      this->dataInicio = dataInicio;
    };
    void setDataFim(string dataFim){
      this->dataFim = dataFim;
    };
    void setNomeResponsavel(string nomeResponsavel){
      this->nomeResponsavel = nomeResponsavel;
    };
    void setConsertosNescessario(Consertos *consertosNescessario){
      this->consertosNescessario = consertosNescessario;
    };
    void setValorFim(Consertos *valorFim){
      this->valorFim = valorFim;
    };
    void setVeiculo(Veiculo *veiculo){
      this->veiculo = veiculo;
    };
    //get

    string getDataInicio(){
      return dataInicio;
    };
    string getDataFim(){
      return dataFim;
    };
    string getNomeResponsavel(){
      return nomeResponsavel;
    };
    Consertos getConsertosNescessario(){
      return *consertosNescessario;
    };
    Consertos getValorFim(){
      return *valorFim;
    };
    Veiculo getVeiculo(){
      return *veiculo;
    }

};


int main(){
  Cidade forget;
  forget.setUf("SC");
  forget.setCidade("Chapeco");

  cout<<forget.getCidade() << " " << forget.getUf() << endl;
  //getEmpresa
  Empresa forget1;
  forget1.setNome("Coca-cola");
  forget1.setEndereco("Rua do Carcule");
  forget1.setContatoNome("Gabriel Kunz"); 
  forget1.setTelefone(40028922);
  forget1.setCnpj(1234567898765432);
  forget1.setCidade(&forget);

  cout << forget1.getNome() << " " << forget1.getEndereco() << " " << forget1.getContatoNome() << " " << forget1.getTelefone() << " " << forget1.getCnpj() << " " << forget1.getCidade().getCidade() << endl;

  //getVeiculo
  Veiculo forget2;
  forget2.setChassi("abcde12345");
  forget2.setPlaca("ark7754");
  forget2.setTipoCombustivel("Gasolina");
  forget2.setTipoVeiculo("Carro");
  forget2.setVeiculoP(&forget1);

  cout << forget2.getChassi() << " " << forget2.getPlaca() << " " << forget2.getTipoCombustivel() << " " << forget2.getTipoVeiculo() << " " << forget2.getVeiculoP().getContatoNome() << endl;
  // get conserto

  Consertos conserto;
  conserto.setTipoConserto("Envelopar o celta");
  conserto.setValor(5000);



  //getRevisao
  Revisao forget3;
  forget3.setDataInicio("10/08/2022");
  forget3.setDataFim("13/08/2022");
  forget3.setNomeResponsavel("Jorge");
  forget3.setConsertosNescessario(&conserto);
  forget3.setVeiculo(&forget2);

  // cout << forget3.getDataInicio() << " " << forget3.getNomeResponsavel() << " " << forget3.getConsertosNescessario() << " " << forget3.getDataFim() << " " << forget3.getValorFim() << " " << forget3.getVeiculo().getPlaca() << endl;



  system("cls");

  // cout << forget3.getVeiculo().getPlaca() << " " << forget3.getDataFim() << " " << forget3.getDataInicio() << " " << forget3.getVeiculo().getVeiculoP().getNome() << " " << forget3.getVeiculo().getVeiculoP().getCidade().getCidade() << " " << forget3.getConsertosNescessario() << " " << forget3.getValorFim() << endl;

  
  system("cls");

  cout << forget3.getVeiculo().getPlaca() << " " << forget3.getDataFim() << " " << forget3.getDataInicio() << " " << forget3.getVeiculo().getVeiculoP().getNome() << " " << forget3.getVeiculo().getVeiculoP().getCidade().getCidade() << " " << forget3.getConsertosNescessario().getTipoConserto() << " " << forget3.getConsertosNescessario().getValor() << endl;
}