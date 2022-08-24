#include <iostream>
#include <fstream>
using namespace std;

int main(){
  string lista;
  fstream texto; 
  texto.open("lista.txt", fstream::out | fstream::trunc);
  cout << "Digite uma frase"<< endl;
  getline(cin, lista);
  texto<< lista << endl;
  texto.close();

  fstream saida;
  saida.open("lista.txt", fstream::in );
  while( saida.good()){
    getline( saida, lista);
    cout << lista << endl;
  }
  saida.close();
  return 0;
}

