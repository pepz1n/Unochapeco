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

    void inserirPosicao (No *lista) {
      int posicao;
      cout << "informe a posicao que deseja adicionar: " <<endl;
      cin >> posicao;
      if (posicao > lista->tamanhoLista(lista) || posicao < 1){
        cout << "posicao invalida" << endl;
        return;
      };

      int contador = 0;
      while (lista) {
        contador ++;
        if (contador == posicao -1) {
          No *no2 = new No;
          no2->prox = lista->prox;
          cout << "informe o valor a ser adicionado:" << endl;
          cin >> no2->x;
          lista->prox = no2;
          return;
        }
      }
    }

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

  No *exluirQualquer (No *lista) {
    int cont = 0;
    int contUser;
    cout << "Informe a posicao: " << endl;
    cin >> contUser;
    
    if (contUser == 1)  {
      lista = lista -> prox;
      return lista;
    }
    
    while (lista){
      cont++;
      if(cont == contUser-1){
        lista->prox = (lista->prox)->prox;
        return lista;
      }else{
        lista = lista->prox;
      } 
    }
  };

  No *enderecoDeNo (No *lista) {
    int valor;
    int cont = 0;
    cout << "Informe o valor para ser pesquizado na lista: " << endl;
    cin >> valor;
    while (lista) {
      if(lista->x == valor) {
        cont++;
        return lista;
      };
      lista = lista->prox;
    };
    if (cont == 0) {
      cout << "Nao encontrou nenhuma posicao com o valor: " << valor << endl;
    };
  };

  int tamanhoLista (No *lista) {
    int cont = 0;
    while (lista) {
      lista = lista->prox;
      cont++;
    }
    return cont;
  };

  void *alterarElemeto (No *lista) {
    int a;
    cout << "informe o valor a ser adicionado no lugar de: " << lista->x << endl;
    cin >> a;
    lista -> x = a;
  };

   int posicaoDoNo (No *lista) {
    int valor;
    int cont = 0;
    cout << "Informe o valor para ser pesquizado na lista: " << endl;
    cin >> valor;
    while (lista) {
      if(lista->x == valor) {
        cont++;
        return cont;
      };
      
      lista = lista->prox;
    };
    if (cont == 0) {
      cout << "Nao encontrou nenhuma posicao com o valor: " << valor << endl;
    };
  };
};


int main () {
  int switchCase;
  No *no1 = new No;
  No *no2 = new No;
  while (1){
    cout << "1 - adicionar na lista " << endl;
    cout << "2 - excluir ultimo na lista " << endl;
    cout << "3 - exlcuir posicao" << endl;
    cout << "4 - encontrar posicao com base no valor" << endl;
    cout << "5 - Tamanho da lista" << endl;
    cout << "6 - Mudar qualquer posicao" << endl;
    cout << "7 - inserir em qualquer posicao" << endl;
    cout << "8 - posicao do no em inteiro" << endl;
    cout << "9 - Adicionar a lista 2 no fim da 1" << endl;
    cin >> switchCase;
  
    switch (switchCase)
    {
    case  1:
      while (1){
        cout << "lista 1 ou 2: ";
        int c;
        cin >> c;
        if (c == 1) {
          no1->construirLista(no1);

        }else {
          no2->construirLista(no2);
        }
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
      no1 = no1->exluirQualquer(no1);
      system ("cls");
      cout << "Sua Lista: "<< endl;
      no1->mostrarTudo(no1);
      break;
    
    case 4:
      system ("cls");
      cout << "Sua Lista: "<< endl;
      no1->mostrarTudo(no1);
      cout << "\n\n" << endl;
      cout << "tamanho da lista: " << no1->enderecoDeNo(no1) << endl;
      break;

    case 5:
      system ("cls");
      cout << "Sua Lista: "<< endl;
      no1->mostrarTudo(no1);
      cout << no1->tamanhoLista(no1) << endl;
      break;

    case 6:
      system ("cls");
      int valor;
      no1->mostrarTudo(no1);
      no1->alterarElemeto(no1->enderecoDeNo(no1));
      system ("cls");
      cout << "Sua Lista: "<< endl;
      no1->mostrarTudo(no1);
      break;
    
    case 7:
      system("cls");
      no1->mostrarTudo(no1);
      no1->inserirPosicao(no1);
      no1->mostrarTudo(no1);
      break;
    
    case 8:
      system ("cls");
      cout << "Sua Lista: "<< endl;
      no1->mostrarTudo(no1);
      cout << "\n\n" << endl;
      cout << "Posicao: " << no1->posicaoDoNo(no1) <<endl;
      break;
    
    case 9:
      (no1->cauda(no1))->prox = no2;
      cout << "Sua Lista: "<< endl;
      no1->mostrarTudo(no1);
    default:
      break;
    }
  }
}