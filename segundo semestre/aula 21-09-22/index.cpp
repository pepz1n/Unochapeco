#include <iostream>
using namespace std;

class No {
  public:
    int x;
    No *prox;
    
    No () {
      this->x = 0;
      this->prox = NULL;
    };
    
    ~No () {};
    
    No *cauda (No *lista) {
      while (lista) {
        
        if ( lista->prox == NULL ) {
          return lista;
        };

        lista = lista->prox;
      };
    };

    No *cabeca (No *lista) {
      return lista;
    };

    bool vazia (No *lista) {
      if (lista->x == 0 && !lista->prox) {
        return true;
      };
      return false;
    };

    void mostrarTudo (No *lista) {
       while (lista) {
      cout << lista->x << " " << lista << " " << lista->prox << endl;
      lista = lista->prox;
      };
    };

    void construirLista (No *lista) {
      int valor;
      cout << "informe valor da variavel!" << endl;
      cin >> valor;
      if (lista->x == 0 && !lista->prox) {
        lista->x = valor;
        lista->mostrarTudo(lista);
        cout << "\n\n";
      } else {
        No *no2 = new No;
        no2->x = valor;
        (lista->cauda(lista))->prox = no2;
        lista->mostrarTudo(lista);
        cout << "\n\n";
      };
    };

  void excluirUltimo (No *lista) {
    while (lista) {
      if ( (lista->prox)->prox == NULL ) {
        lista->prox = NULL;
        return;
      } else {
        lista = lista->prox;
      }
    };  
  };

  void exluirQualquer (No *lista) {
    int cont = 0;
    int contUser;
    cout << "Inform A posicao" << endl;
    cin >> contUser;
    while (lista){
      cont++;
      if(cont == contUser-1){
        lista->prox = (lista->prox)->prox;
        return;
      }else{
        lista = lista->prox;
      } 
    }
  }
};


int main () {
  // No *no1 = new No;
  // No *no2 = new No;
  // No *no3 = new No;
  // No *no4 = new No;
  // cout << no1->x << " " << no1->prox << endl;
  
  // no1->x = 22;
  // cout << no1->x << " " << no1->prox << endl;
  
  // no2->x = 55;
  // no3->x = 10;
  // no4->x = 11;
  
  // no1->prox = no2;
  // no2->prox = no3;
  // no3->prox = no4;

  // cout << no1->cauda(no1) << endl;

  // cout << "vazio? " << no1->vazia(no1) << endl;

  // cout << "Cabeca: " << no1->cabeca(no1) << endl;

  // (no1->cauda(no1))->x = 9999;
  
  // no1->mostrarTudo(no1);

  int switchCase;
  No *no1 = new No;
  while (1){
    cout << "1 - adicionar na lista " << endl;
    cout << "2 - excluir ultimo na lista " << endl;
    cout << "3 - exlcuir posicao" << endl;
    cin >> switchCase;
  
    switch (switchCase)
    {
    case  1:
      while (1){
        no1->construirLista(no1);
        cout << "Deseja adicionar mais? (s ou n)" <<endl;
        char x;
        cin >> x;
        if (x == 'n') break;
      };
      system ("cls");
      cout << "Sua Lista: "<< endl;
      no1->mostrarTudo(no1);
      break;

    case 2:
      no1->excluirUltimo(no1);
      system ("cls");
      cout << "Sua Lista: "<< endl;
      no1->mostrarTudo(no1);
      break;
    
    case 3:
      no1->exluirQualquer(no1);
      system ("cls");
      cout << "Sua Lista: "<< endl;
      no1->mostrarTudo(no1);
      break;
    default:
      break;
    }
  }

}