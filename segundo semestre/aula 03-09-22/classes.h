/*
  Desenvolvimento:
1) Crie programas para implementar as classes, seus atributos e métodos,
conforme o diagrama.
2) Implemente métodos construtor e destrutor para as classes.
3) Implemente os métodos “setters” e “getters” para os atributos de cada
classe.
4) O método “vencimento” da classe Funcionário retorna somente o
salário.
5) O método “vencimento” da classe Horista é feito pelo cálculo da
multiplicação do número de horas pelo valor da hora.
6) O método “vencimento” da classe Comissionado tem o valor calculado
com base no valor total das vendas e do percentual de comissão que
deve ser recebida pelo vendedor comissionado.
7) O método “mostrar” do Horista deve retornar o cpf, nome, número de
horas trabalhadas, o valor da hora, e o valor do vencimento.
8) O método “mostrar” do Comissionado deve retornar o cpf, nome e o
valor do vencimento.
9) O método “mostrar” do Funcionário deve retornar o cpf, nome, endereço,
salário e a descrição do apartamento ao qual está vinculado.
10) Funcionario é uma superclasse e Horista e Comissionado herdam
de Funcionario. Existe uma única associação entre Funcionario e
Departamento que é feita por meio de um ponteiro.
11) As classes devem estar definidas em um arquivo do tipo header,
isto é, uma biblioteca de classes. O bloco main deve estar em um
arquivo a parte. Entregue somente os arquivos fonte: .h e .cpp no TDE.
*/
#include <iostream>
using namespace std;

class Departamento {
  private:
    int codigo;
    string descricao;
    string localizacao;
  public:
    Departamento(){};
    ~Departamento(){};
    
    void setCodigo ( int codigo ) { this->codigo = codigo; };
    void setDescricao ( string descricao ) { this->descricao = descricao; };
    void setLocalizacao ( string localizacao ) { this->localizacao = localizacao; };

    int getCodigo () { return this->codigo; };
    string getDescricao () { return this->descricao; };
    string getLocalizacao () { return this->localizacao; };

    void mostrar (){
      cout << "Codigo: " << this->codigo << endl;
      cout << "Descricao: " << this->descricao << endl;
      cout << "Localizacao: " << this->localizacao << endl;
      return;
    }

};

class Funcionario {
  protected:
    string cpf;
    string nome;
    string endereco;
    string cidade;
    string uf;
    Departamento *departamento;
  
  public:
    Funcionario(){};
    ~Funcionario(){};

    void setCpf (string cpf) { this->cpf = cpf; };
    void setNome (string nome) { this->nome = nome; };
    void setEndereco (string endereco) { this->endereco = endereco; };
    void setCidade (string cidade) { this->cidade = cidade; };
    void setUf (string uf) { this->uf = uf; };
    void setDepartamento (Departamento *departamento) { this->departamento = departamento; };

    string getCpf () { return this->cpf; };
    string getNome () { return this->nome; };
    string getEndereco() { return this->endereco; };
    string getCidade() { return this->cidade; };
    string getUf () { return this->uf; };
    Departamento *getDepartamento () { return this->departamento; };

    void mostrar () {
      cout << "CPF: " << this->cpf << endl;
      cout << "Nome: " << this->nome << endl;
      cout << "Cidade: " << this->cidade << endl;
      cout << "Endereco: " << this->endereco << endl;
      cout << "UF: " << this->uf<< endl;
      cout << "Departamento: " << this->departamento->getDescricao() << endl;
      return;
    };
};

class Horista : public Funcionario {
  private:
    float horas;
    float valorHora;
  public:
    Horista () : Funcionario() {};
    ~Horista () {};

    void setHoras ( float horas ) { this->horas = horas; };
    void setValorHora ( float valorHora ) { this->valorHora = valorHora; }; 

    float getHoras () { return this->horas; };
    float getValorHora () { return this->valorHora; };

  
    void vencimento () {
      cout << "Salario: " << this->horas * this->valorHora << endl;
      return;
    };

    void mostrar () {
      cout << "CPF: " << this->cpf << endl;
      cout << "Nome: " << this->nome << endl;
      cout << "Horas Trabalhadas: " << this->horas << endl;
      cout << "Valor por Hora: " << this->valorHora << endl;
      vencimento();
      return;
    };
};

class Comissionado : public Funcionario {
  private:
    float valorVendas;
    float taxaComissao;
  public:
    Comissionado() : Funcionario() {};
    ~Comissionado(){};

    void setValorVendas ( float valorVendas ) { this->valorVendas = valorVendas; };
    void setTaxaComissao ( float taxaComissao ) { this->taxaComissao = taxaComissao; };

    float getValorVendas () { return this->valorVendas; };
    float getTaxaComissao () { return this->taxaComissao; };

    void vencimento () {
      cout << "Salario: " << (this->taxaComissao/100) * this->valorVendas << endl;
    };

    void mostrar () {
      cout << "CPF: " << this->cpf << endl;
      cout << "Nome: " << this->nome << endl;
      vencimento();
    };
};
