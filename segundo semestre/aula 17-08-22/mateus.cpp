#include <iostream>
using namespace std;

class Produto {
protected:
  int id;
  string descricao;
  string undmedida;
  float valor;
  int qtd;
public:
  Produto(){}
  ~Produto(){}

  void setId(int id){
    this->id = id;
  }
  void setDescricao(string descricao){
    this->descricao = descricao;
  }
  void setUndMedida(string undmedida){
    this->undmedida = undmedida;
  }
  void setQtd(int qtd){
    this->qtd = qtd;
  }
  void setValor(float valor){
    this->valor = valor;
  }
  int getId(){
    return id;
  }
  string getDescricao(){
    return descricao;
  }
  string getUndMedida(){
    return undmedida;
  }
  int getQtd(){
    return qtd;
  }
  int getValor(){
    return valor;
  }
  float getValorEstoque(){
    return (qtd * valor);
  }
};
class Cliente {
protected:
  int id;
  string name;
  string endereco;
public:
  Cliente(){}
  ~Cliente(){}

  void setId(int id){
    this->id = id;
  }
  void setName(string name){
    this->name = name;
  }
  void setEndereco(string endereco){
    this->endereco = endereco;
  }
  int getId(){
    return id;
  }
  string getName(){
    return name;
  }
  string getEndereco(){
    return endereco;
  }
};
class Venda: public Cliente, Produto{
protected:
  Cliente *cliente;
  Produto *produto;
  int dia;
  int mes;
  int ano;
  float qtd;
public:
  Venda(){}
  ~Venda(){}

  void setCliente(Cliente *cliente){
    this->cliente = cliente;
  }
  void setProduto(Produto *produto){
    this->produto = produto;
  }
  void setDia(int dia){
    this->dia= dia;
  }
  void setMes(int mes){
    this->mes = mes;
  }
  void setAno(int ano){
    this->ano = ano;
  }
  void setQtd (int qtd){
    this->qtd = qtd;
  }
  Cliente *getCliente(){
    return cliente;
  }
  Produto *getProduto(){
    return produto;
  }
  int getDia(){
    return dia;
  }
  int getMes(){
    return mes;
  }
  int getAno(){
    return ano;
  }
  float getQtd(){
    return qtd;
  }
};

int main (){
  Cliente eu;
  eu.setId(1);
  eu.setName("Mateus");
  eu.setEndereco("chapeco-pres. Medicci");

  Produto coca;
  coca.setId(1);
  coca.setDescricao("Coca Geladinha");
  coca.setQtd(15);
  coca.setUndMedida("UND");
  coca.setValor(7.99);

  cout << coca.getValorEstoque() << endl;

  Venda primeira;
  primeira.setCliente(&eu);
  primeira.setProduto(&coca);
  primeira.setDia(17);
  primeira.setMes(8);
  primeira.setAno(2022);
  primeira.setQtd(15);

  cout << "Cliente\tEndereco" << endl;
  cout << primeira.getCliente()->getName() << "\t";
  cout << primeira.getCliente()->getEndereco() << endl;
  cout << "\n--------CUPOM FISCAL---------" << endl;
  cout << "Descricao\tQTD\tVal.Unit\tVal.Total" << endl;
  cout << primeira.getProduto()->getDescricao() << "\t";
  cout << primeira.getQtd() << endl;
}

