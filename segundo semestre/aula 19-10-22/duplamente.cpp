#include <iostream>
#include "duplamente.h"
using namespace std;

int main () {
  Lista *lista1 = new Lista;

  while (true) {
    cout << "1 - Montar lista" << endl;
    cout << "2 - posicao de um valor" << endl;
    cout << "3 - Adicionar no comeco" << endl;
    cout << "4 - Adicionar no meio da lista"<< endl;
    cout << "5 - Excluir qualquer posicao" << endl;
    cout << "6 - tamanho da lista" << endl;
    cout << "7 - Mostrar tudo a partir da cauda" << endl;
    cout << "8 - Excluir ultimo" << endl;
    cout << "9 - Excluir Primero" << endl;
    cout << "10 - Quantidade de vezes que um numero aparece" << endl;
    cout << "11 - Ordenar lista" << endl;
    int x;
    cin >> x;

    switch (x) {
    case 1:
      lista1->AdicionarFinal(lista1);
      break;
    
    case 2:
      cout << "posicao: " << lista1->posicao(lista1) << endl; 
      break;
    
    case 3:
      lista1 = lista1->AdicionarCabeca(lista1);
      lista1->mostrarLista(lista1);
      break;
    
    case 4:
      lista1->AdicionarQualquerPosicao(lista1);
      lista1->mostrarLista(lista1);
      break;
    
    case 5:
      lista1 = lista1->ExlcuirValor(lista1);
      lista1->mostrarLista(lista1);
      break;
    
    case 6:
      lista1->mostrarLista(lista1);
      cout << "tamanho: " << lista1->tamanho(lista1) << endl;
      break;

    case 7:
      lista1->mostrarTudoCauda(lista1->cauda(lista1));
      break;
    
    case 8:
      lista1 = lista1->tirarUltimo(lista1);
      lista1->mostrarLista(lista1);
      break;
    
    case 9:
      lista1 = lista1->tirarPrimeiro(lista1);
      break;
    
    case 10:
      cout << "quantidade: " << lista1->qntd(lista1) << "\n\n" <<endl;
      break;

    case 11:
      lista1->ordenar(lista1);
      lista1->mostrarLista(lista1);
      break;
    default:
      break;
    }; 
  };
};