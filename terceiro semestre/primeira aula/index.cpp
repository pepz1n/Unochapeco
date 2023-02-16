//Escreva um algoritmo que tenha duas variaveis e estas sejam acessadas via funçao atraves de referencia por ponteiros na funçao alimente via leitura de teclado
#include "iostream"
using  namespace  std;

void getTecladoDobro (int *pont) {
    cin >> *pont;
    *pont *= 2;
}


int main() {
    int texto, texto2;

    getTecladoDobro(&texto);
    getTecladoDobro(&texto2);

    cout << texto << " " << texto2 << endl;
}