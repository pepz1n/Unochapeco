#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

class Data
{
public:
  Data() {}
  ~Data() {}
  int getAno()
  {
    int ano;
    time_t t = time(NULL);
    tm *timePtr = localtime(&t);
    ano = (timePtr->tm_year + 1900);
    return ano;
  }
  int getMes()
  {
    int mes;
    time_t t = time(NULL);
    tm *timePtr = localtime(&t);
    mes = (timePtr->tm_mon + 1);
    return mes;
  }
  int getDia()
  {
    int dia;
    time_t t = time(NULL);
    tm *timePtr = localtime(&t);
    dia = (timePtr->tm_mday);
    return dia;
  }
};

class Livro
{
private:
  int id;
  string titulo;
  int ano;

public:
  Livro(){};
  ~Livro(){};
  void setId(int id) { this->id = id; };
  void setTitulo(string titulo){this->titulo;};
  void setAno(int ano) { this->ano = ano; };

  int getId() { return id; };
  string getTitulo() { return titulo; };
  int getAno() { return ano; };
};

class Emprestimo : public Livro
{
private:
  Livro *livro;
  int emprestimo[3];
  int devolucao[3];
  Data data;
public:
  Emprestimo(){};
  ~Emprestimo(){};

  void setLivro(Livro *livro) { this->livro =livro; };

  Livro *getLivro() { return this->livro; };


  void setEmprestimo0(){ this->emprestimo[0] = data.getDia(); };
  void setEmprestimo1(){ this->emprestimo[1] = data.getMes(); };
  void setEmprestimo2(){ this->emprestimo[2] = data.getAno(); };

  int getEmprestimo0(){ return this->emprestimo[0]; };
  int getEmprestimo1(){ return this->emprestimo[1]; };
  int getEmprestimo2(){ return this->emprestimo[2]; };

  void setDevolucao0(){ this->devolucao[0] = data.getDia() + 5; };
  void setDevolucao1(){ this->devolucao[1] = data.getMes(); };
  void setDevolucao2(){ this->devolucao[2] = data.getAno(); };

  int getDevolucao0(){ return this->devolucao[0]; };
  int getDevolucao1(){ return this->devolucao[1]; };
  int getDevolucao2(){ return this->devolucao[2]; };

  void setTudo(){
    setEmprestimo0();
    setEmprestimo1();
    setEmprestimo2();
    setDevolucao0();
    setDevolucao1();
    setDevolucao2();
  }

  void emprestimoTempo (){
    Data data;
    int dia = data.getDia();
    int mes = data.getMes();
    int ano = data.getAno();
    int dias = dia - this -> emprestimo[0] - 5;
    int meses = mes - this -> emprestimo[1];
    int anos = ano - this -> emprestimo[2];
    dias = dias < 0 ? dias * -1 : dias;
    meses = meses < 0 ? meses * -1 : meses;
    anos = anos < 0 ? anos * -1 : anos;
 
 
    if(dias > (mes  <= 7 && mes%2 == 0 ? mes != 2 ? 30 : 28 : 31)){
      meses ++;
      dias = dias - (mes  <= 7 && mes%2 == 0 ? mes != 2 ? 30 : 28 : 31);
    }
    if(mes > 12){
      anos ++;
      mes = mes - 12;
    }
      cout << "\nFaltam " << dias << " Dia(s) " << meses << " Mese(s) e " << anos << " Ano(s) para a devolucao" << endl;
  }


};



int main(){
  Livro livro;
  livro.setAno(1990);
  livro.setId(1);
  livro.setTitulo("O ultimo Forget");


  Emprestimo emprestimo;
  emprestimo.setLivro(&livro);
  emprestimo.setTudo();

  emprestimo.emprestimoTempo();

  fstream texto;
  texto.open("texto.txt", fstream::out | fstream::trunc);
  texto << "ID Livro: " <<  emprestimo.getLivro() ->getId() << " Ano de publicação: " << emprestimo.getLivro() ->getAno() << " Emprestimo: " << emprestimo.getEmprestimo0() << "/" << emprestimo.getEmprestimo1() << "/" << emprestimo.getEmprestimo2() << " Devolucao: " << emprestimo.getDevolucao0() << "/" << emprestimo.getDevolucao1() << "/" << emprestimo.getDevolucao2() << endl;
  texto.close();


}