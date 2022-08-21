#include <iostream>
using namespace std;

class Produto
{
private:
  int idProduto;
  float preco;
  string desc;
  string unidadeMedida;
  float quant;

public:
  Produto(){};
  ~Produto(){};
  void setIdProduto(int idProduto) { this->idProduto = idProduto; };
  void setDesc(string desc) { this->desc = desc; };
  void setUnidadeMedida(string unidadeMedida) { this->unidadeMedida = unidadeMedida; };
  void setQuant(float quant) { this->quant = quant; };
  void setPreco(float preco) { this->preco = preco; };

  int getId() { return idProduto; };
  string getDesc() { return desc; };
  float getQuant() { return quant; };
  float getPreco() { return preco; };
  string getUnidadeMedida() { return unidadeMedida; };
};

class Cliente
{
protected:
  int id;
  string nome;
  string endereco;

public:
  Cliente(){};
  ~Cliente(){};

  void setId(int id) { id = id; };
  void setNome(string nome) { nome = nome; };
  void setEndereco(string endereco) { endereco = endereco; };

  int getId() { return id; };
  string getNome() { return nome; };
  string getEndereco() { return endereco; };
};

class PessoaFisica : public Cliente
{
private:
  int cpf;
  int rg;

public:
  PessoaFisica() : Cliente(){};
  ~PessoaFisica(){};
  void setCpf(int cpf) { this->cpf = cpf; };
  void setRg(int rg) { this->rg = rg; };
  void setNome(string nome) { this->nome = nome; };
  void setId(int id) { this->id = id; };
  void setEndereco(string endereco) { this->endereco = endereco; };

  int getCpf() { return cpf; };
  int getRg() { return rg; };
  string getNome() { return nome; };
  string getEndereco() { return endereco; };
  int getId() { return id; };
};

class PessoaJuridica : public Cliente
{
private:
  int cnpj;
  string nomeFantasia;

public:
  PessoaJuridica() : Cliente(){};
  ~PessoaJuridica(){};
  void setNomeFantasia(string nomeFantasia) { this->nomeFantasia = nomeFantasia; };
  void setCnpj(int cnpj) { this->cnpj = cnpj; };
  void setNome(string nome) { this->nome = nome; };
  void setId(int id) { this->id = id; };
  void setEndereco(string endereco) { this->endereco = endereco; };

  string getNomeFantasia() { return nomeFantasia; };
  int getCnpj() { return cnpj; };
  string getNome() { return nome; };
  string getEndereco() { return endereco; };
  int getId() { return id; };
};

class Venda
{
private:
  Cliente *clienteId;
  Produto *produtoId;
  int dia;
  int mes;
  int ano;
  float quantidade;

public:
  Venda(){};
  ~Venda(){};
  void setCliente(Cliente *clienteId) { this->clienteId = clienteId; };
  void setProduto(Produto *produtoId) { this->produtoId = produtoId; };
  void setDia(int dia) { this->dia = dia; };
  void setAno(int ano) { this->ano = ano; };
  void setMes(int mes) { this->mes = mes; };
  void setQuantidade(int quantidade) { this->quantidade = quantidade; };

  Cliente getCliente() { return *clienteId; };
  Produto getProduto() { return *produtoId; };
  int getDia() { return dia; };
  int getAno() { return ano; };
  int getMes() { return mes; };
  int getQuantidade() { return quantidade; };
};

int main()
{
  PessoaFisica p;
  p.setCpf(128910);
  p.setRg(3312312);
  p.setEndereco("xaxim");
  p.setNome("Bernardo");
  p.setId(1);

  Produto produto;
  produto.setIdProduto(1);
  produto.setDesc("Coca cola");
  produto.setPreco(7.99);
  produto.setQuant(99);
  produto.setUnidadeMedida("UND");

  Venda venda;
  venda.setDia(1);
  venda.setAno(2022);
  venda.setMes(8);
  venda.setQuantidade(3);
  venda.setCliente(&p);
  venda.setProduto(&produto);

  cout << "ID: " << venda.getCliente().getId() << " Nome: " << venda.getCliente().getNome() << " Desc: " << venda.getProduto().getDesc() << " quantidade:" << venda.getQuantidade() << " valor:" << venda.getProduto().getPreco() * venda.getQuantidade() << endl;
}