#include <iostream>
using namespace std;

class Lista {
  public:
    int a;
    Lista *ant, *prox;

    Lista () {
      this->a = 0;
      this->ant = NULL;
      this->prox = NULL;

    };
    ~Lista () { delete this; };

     Lista *cauda(Lista *lista){
      while(lista){
        
        if ( !lista->prox ) {
          return lista;
        };

        lista = lista->prox;
      };
    };

    Lista *cabeca (Lista *lista) {
      while (lista) {
        if (!lista->ant) {
          return lista;
        };
        lista = lista->ant;
      };
    }

    bool vazia (Lista *lista) {
      if (lista->a == 0 && !lista->prox && !lista->ant) {
        return true;
      }else {
        return false;
      };
    }

    void mostrarLista (Lista *lista) {
      system("cls");
      while (lista) {
        cout << "Ant: " << lista->ant << "\tvalor: " << lista->a << "\tProx: " << lista->prox << endl;   
        lista = lista->prox;
      }
    }

    Lista *posicao(Lista *lista) {
      system("cls");
      lista->mostrarLista(lista);
      int valor;
      cout << "Informe o valor: " <<endl;
      cin >> valor;
      while (lista) {
        if (lista->a == valor) {
          return lista;
        };
        lista = lista->prox;
      };
      cout << "Valor Não encontrado";
      return 0;
    };

    void AdicionarFinal (Lista *lista) {
      int valor;
      Lista *listaAux = new Lista;
      system("cls");
      cout << "Informe o Valor a se adicionado: ";
      cin >> valor;
      if (lista->vazia(lista)) {
        lista->a = valor;
      } else {
        listaAux->a = valor;
        listaAux->ant = lista->cauda(lista);
        (lista->cauda(lista))->prox = listaAux;
      };

      system("cls");
      lista->mostrarLista(lista);
    };

    void *AdicionarQualquerPosicao (Lista *lista) {
      int valor;
      int posicao;
      cout << "informe a posicao (comecando do 0): " <<endl;
      cin >> posicao;
      cout << "\nInforme o valor: " << endl;
      cin >> valor;
      int cont = 0;

      while (lista) {
        if (cont == posicao) {
          Lista *aux = new Lista;
          aux->prox = lista;
          aux->a = valor;
          aux->ant = lista->ant;
          lista->ant = aux;
          (aux->ant)->prox = aux;
        }
        cont++;
        lista = lista->prox;
      }      
    }

    Lista *AdicionarCabeca (Lista *lista) {
      Lista *listaAux = new Lista;
      int valor;
      system("cls");
      cout << "Informe o Valor a se adicionado: ";
      cin >> valor;
      listaAux->prox = lista->cabeca(lista);
      (lista->cabeca(lista))->ant = listaAux;
      listaAux->a = valor;
      return listaAux;
    }


    Lista *ExlcuirValor (Lista *lista) {
      int valor;
      cout << "valor a ser excluido: " << endl;
      cin >> valor;
      int cont = 0;
      while (lista) {
        if (lista->a == valor && cont != 0 && lista->prox) {
          (lista->ant)->prox = lista->prox;
          (lista->prox)->ant = lista->ant;
          break;
        }else if(lista->a == valor && lista->prox ) {
          lista = lista->prox;
          lista->ant = NULL;
          break;
        }else if (lista->a == valor) {
          (lista->ant)->prox = NULL;
          break;
        }
        lista = lista->prox;
        cont ++;
      }
      return lista->cabeca(lista);
    }


    int tamanho (Lista *lista) {
      int cont = 0;
      while (lista) {
        cont ++;
        lista = lista->prox;
      };
      return cont;
    };

    Lista *tirarUltimo (Lista *lista) {
      ((lista->cauda(lista))->ant)->prox = NULL;
      return lista;
    };

    Lista *tirarPrimeiro (Lista *lista) {
      ((lista->cabeca(lista))->prox)->ant= NULL;
      return lista->prox;
    }

    void mostrarTudoCauda (Lista *lista) {
      system("cls");
      while (lista) {
        cout << "Ant: " << lista->ant << "\tvalor: " << lista->a << "\tProx: " << lista->prox << endl;   
        lista = lista->ant;
      }
    }

    int qntd (Lista *lista) {
      int cont = 0;
      int valor;
      system("cls");
      cout << "qual valor voce deseja ver" << endl;
      cin >> valor;
      while (lista){
        if(lista->a == valor) {
          cont++;
        };
        lista = lista->prox;
      };
      return cont;
    }
};



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
    cout << "10 - Quantidade de vezes que um numero aparece";
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
      lista1->mostrarLista(lista1);
      break;
    
    case 10:
      cout << "quantidade: " << lista1->qntd(lista1) << "\n\n" <<endl;
      break;
    default:
      break;
    }; 
  }
  


}