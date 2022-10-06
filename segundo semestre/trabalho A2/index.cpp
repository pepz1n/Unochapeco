#include <iostream>
using namespace std;

class No {
  public:
    int x;
    No *prox;
    // método construtor
    No() {
      this->x = 0;
      this->prox = NULL;
    };
    ~No() {};
    // método que retorna o nó inicial da lista
    No *head(No *lista) {
      return lista;
    };

    No *cauda(No *lista){
      No *listaInicio=lista;
      while(lista){
        
        if ( lista->prox == listaInicio ) {
          return lista;
          };

        lista = lista->prox;
      };
    };

    void mostrarTudo (No *lista) {
      No *listaInicio = lista;
      do {
        cout << lista->x << " " << lista << " " << lista->prox << endl;
        lista = lista->prox;
      } while (lista != listaInicio && lista);
    };

    void contruirLista (No *lista) {
      int valor;
      cout << "informe valor da variavel!" << endl;
      cin >> valor;
      if (lista->x == 0 && !lista->prox) {
        lista->x = valor;
        lista->prox = lista;
        lista->mostrarTudo(lista);
        cout << "\n\n";
      } else {
        No *no2 = new No;
        no2->x = valor;
        no2->prox = lista->head(lista);
        (lista->cauda(lista))->prox = no2;
        lista->mostrarTudo(lista);
        cout << "\n\n";
      };
    };

    int tamanhoLista (No *lista) {
      No *listaInicio = lista;
      int cont = 0;
      do {
        lista = lista->prox;
        cont++;
      } while (lista != listaInicio && lista);
      return cont;
    };

    No *enderecoDeNo (No *lista) {
      int valor;
      No *listaInicio = lista;
      int cont = 0;
      cout << "Informe o valor para ser pesquisado na lista: " << endl;
      cin >> valor;
      do {
        if(lista->x == valor) {
          cont++;
          return lista;
        };
        lista = lista->prox;
      } while (lista != listaInicio && lista);
      if (cont == 0) {
        cout << "Nao encontrou nenhuma posicao com o valor: " << valor << endl;
      };
    };

    void *alterarElemeto (No *lista) {
      int a;
      cout << "informe o valor a ser adicionado no lugar de: " << lista->x << endl;
      cin >> a;
      lista -> x = a;
    };

    void *mostrarTudoQualquerPosicao (No *lista) {
      system("cls");
      cout << "Lista a partir do numero: " << lista->x << endl;
      No *listaInicio = lista;
      do {
        cout << lista->x << " " << lista << " " << lista->prox << endl;
        lista = lista->prox;
      } while (lista != listaInicio && lista);
      cout << "\n\n" << endl;
    };
    

    No *inserirNaCabeca (No *lista) {
      No *no2 = new No;
      no2->prox = lista;
      cout << "Informe um valor a ser adicionado: " << endl;
      cin >> no2->x;
      (lista->cauda(lista))->prox = no2;
      lista = no2;
      return lista;
    }
};


int main () {
  No *no1 = new No;
  int switchCase;
  while (true) {
    if (no1->prox) {
      cout << "Sua Lista: "<< endl;
      no1->mostrarTudo(no1);
    }
    cout << "\n\n" << endl;
    cout << "1 - Cauda da lista;" << endl;
    cout << "2 - Mostrar Tudo;" << endl;
    cout << "3 - adicionar na lista;" << endl; 
    cout << "4 - Obter o numero de nos da lista;" << endl;
    cout << "5 - mudar Posicao;" <<endl;
    cout << "6 - mostrar a partir de qualquer elemento;" << endl;
    cout << "7 - Inserir na cabeca da lista." << endl;
    cin >> switchCase;

    switch (switchCase)
    {
    case 1:
      cout << "Cauda:" << endl;
      cout << "Posicao da memoria:" << no1->cauda(no1) <<endl;
      cout << "valor: " << (no1->cauda(no1))->x << endl;
      cout << "Prox: " << (no1->cauda(no1))->prox << "\n\n" << endl;
      break;
    
    case 2:
      //a main ja mostra a lista autmoaticamente toda vez que volta para linha 122
      system("cls");
      break;
      
    case 3:
      while (1)
      {
        no1->contruirLista(no1);
        cout << "Deseja adicionar mais? (s ou n)" << endl;
        char x;
        cin >> x;
        if (x == 'n') break;

        system ("cls");
        cout << "Sua Lista: "<< endl;
        no1->mostrarTudo(no1);
      }
      system("cls");
      break;
    
    case 4:
      cout << "Tamanho da lista: " << no1->tamanhoLista(no1) << endl;
      break;

    case 5:
      system ("cls");
      int valor;
      no1->mostrarTudo(no1);
      no1->alterarElemeto(no1->enderecoDeNo(no1));
      system ("cls");
      cout << "Sua Lista: "<< endl;
      no1->mostrarTudo(no1);
      break;
    
    case 6:
      system("cls");
      no1->mostrarTudo(no1);
      no1->mostrarTudoQualquerPosicao(no1->enderecoDeNo(no1));
      break;

    case 7:
      system("cls");
      no1 = no1->inserirNaCabeca(no1);
      break;
    default:
      break;
    }
  }
}