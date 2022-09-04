#include <iostream>
#include "classes.h"
using namespace std;

int main (){
  Departamento departamento;
  departamento.setCodigo(1);
  departamento.setDescricao("Departamento de Alimentacao");
  departamento.setLocalizacao("Chapeco");

  cout << "Horista: " << endl;
  Horista horista;
  horista.setCpf("123.456.789-10");
  horista.setNome("Bernardo Cortina Zanetti");
  horista.setEndereco("Rua Ricardo Panizzi, 755");
  horista.setCidade("XAXIM");
  horista.setUf("SC");
  horista.setDepartamento(&departamento);
  horista.setHoras(10);
  horista.setValorHora(2.5);
  
  horista.vencimento();
  cout << "\n" << endl;
  horista.mostrar();


  cout << "\n" << endl;
  cout << "\n" << endl;

  cout << "Comissionado: " << endl;
  Comissionado comissionado;
  comissionado.setCpf("123.456.789-10");
  comissionado.setNome("Bernardo Cortina Zanetti");
  comissionado.setEndereco("Rua Ricardo Panizzi, 755");
  comissionado.setCidade("XAXIM");
  comissionado.setUf("SC");
  comissionado.setDepartamento(&departamento);
  comissionado.setValorVendas(1500);
  //TaxaComissao se referindo a uma porcentagem entre 0 e 100
  comissionado.setTaxaComissao(10);
  
  comissionado.vencimento();
  cout << "\n" << endl;
  comissionado.mostrar();








};