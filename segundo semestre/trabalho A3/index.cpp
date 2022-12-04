#include <iostream>
using namespace std;

class Container {
  private:
    int codigo;
    float peso;
    string conteudo;
  public:
    Container(){
      this->codigo = 0;
      this->peso = 0;
      this->conteudo = "";
    }
    ~Container(){}

    //sets:
    void setConteudo (Container *novoContainer, string conteudo) {
      novoContainer->conteudo = conteudo;
    }

    void setPeso (Container *novoContainer, float peso) {
      novoContainer->peso = peso;
    }

    void setCodigo (Container *novoContainer, int codigo) {
      novoContainer->codigo = codigo;
    }

    //get:
    
    int getCodigo (Container *containerExistente) {
      return containerExistente->codigo;
    }

    string getConteudo (Container *containerExistente) {
      return containerExistente->conteudo;
    }

    float getPeso (Container *containerExistente) {
      return containerExistente->peso;
    }

    Container *getContainer (Container *containerExistente) {
      return containerExistente;
    }
};


class Armazem {
  public:
    Container *container;
    Armazem *prox;

    Armazem () {
      this->container = nullptr;
      this->prox = nullptr;
    }

    ~Armazem () {}

    Armazem *cauda (Armazem *pilha) {
      while (pilha) {
        
        if(!pilha->prox) {
          return pilha;
        }

        pilha = pilha->prox;
      }
      return nullptr;
    }

    void push (Container *container) {
      if (this->contador(this) == 5) {
        cout << "Impossivel Adicionar Mais Containers, mande para o deque assim que possivel!" << endl;
        return;
      }
      if (!this->container && !this->prox) {
        this->container = container;
        return;
      }

      Armazem *novaPilha = new Armazem;
      
      novaPilha->container = container;
      (this->cauda(this))->prox = novaPilha;
      
      return;
    }

    Container *pop (Armazem *pilha) {
      Container *valor;
      while (pilha) {
        if (!pilha->prox) {
        valor = pilha->container;
        pilha->container = nullptr;
        return valor;
      }
      if (!(pilha->prox)->prox) {
        valor = (pilha->prox)->container;
        delete (pilha->prox)->prox;
        pilha->prox = nullptr;
        return valor;
      };    
        pilha = pilha->prox;
      }
    }

    void mostrar (Armazem *pilhaArmazem) {
      system("cls");
      int posicao = 1;
      if (!pilhaArmazem->container) {
        cout << "Nao Tem nada no Armazem!" << endl;
        return;
      }  
      cout << "Armazem: " << endl;
      while (pilhaArmazem) {
        cout << "Codigo: " << pilhaArmazem->container->getCodigo(pilhaArmazem->container) << "\tPeso: " << pilhaArmazem->container->getPeso(pilhaArmazem->container) << "\tConteudo: " << pilhaArmazem->container->getConteudo(pilhaArmazem->container) << "\t Posicao no Armazem: " << posicao << endl;
        pilhaArmazem = pilhaArmazem->prox;
        posicao++;
      }
    }

    int contador (Armazem *armazem) {
      int cont = 0;
      while (armazem) {
        cont ++;
        armazem = armazem->prox;
      }
      
      return cont;
    }
};

class Deque {
  public:
    Container *container;
    Deque *prox;

    Deque () {
      this->container = nullptr;
      this->prox = nullptr;
    }

    ~Deque(){
      delete this;
    }

    void push (Deque *deque, Container *valor) {

      if (!deque->prox && !deque->container) {
        deque->container = valor;
        return;
      };
    
      deque = deque->cauda(deque);
      Deque *nova = new Deque;
      nova->container = valor;
      deque->prox = nova;

      return;
    }

    Deque *cauda (Deque *deque) {
      while (deque) {
        if (!deque->prox){
          return deque;
        };

        deque = deque->prox;
      }
    }

    Armazem *receberContainers (Armazem *armazem) {
      while (armazem->container) {
        this->push(this, armazem->pop(armazem));
      }
      armazem = new Armazem;
    }

    void mostrar (Deque *deque) {
      system("cls");
      int posicao = 1;

      if (!deque->container) {
        cout << "Nao Tem nada no Deque!" << endl;
        return;
      }  

      cout << "Deque: " << endl;

      while (deque) {
        cout << "Codigo: " << deque->container->getCodigo(deque->container) << "\tPeso: " << deque->container->getPeso(deque->container) << "\tConteudo: " << deque->container->getConteudo(deque->container) << "\t Posicao no deque: " << posicao << endl;
        deque = deque->prox;
        posicao++;
      }
    }
};

class Navio {
  public:
    Container *container;
    Navio *prox;

    Navio () {
      this->container = nullptr;
      this->prox = nullptr;
    }

    ~Navio(){
      delete this;
    }

    Navio *cauda (Navio *pilha) {
      while (pilha) {
        
        if(!pilha->prox) {
          return pilha;
        }

        pilha = pilha->prox;
      }
      return nullptr;
    }

    void push (Container *container) {
      if (!this->container && !this->prox) {  
        this->container = container;
        return;
      }

      Navio *novaPilha = new Navio;
      
      novaPilha->container = container;
      (this->cauda(this))->prox = novaPilha;
      
      return;
    }

    Deque *receberDeque (Deque *deque) {
      while (deque) {
        this->push(deque->container);
        deque = deque->prox;
      }
      return new Deque;
    }

    void mostrar (Navio *navio) {
      system("cls");
      int posicao = 1;

      if (!navio->container) {
        cout << "Nao Tem nada no Navio!" << endl;
        return;
      }

      while (navio) {
        cout << "Navio: " << endl;
        cout << "Codigo: " << navio->container->getCodigo(navio->container) << "\tPeso: " << navio->container->getPeso(navio->container) << "\tConteudo: " << navio->container->getConteudo(navio->container) << "\t Posicao no Navio: " << posicao << endl;
        navio = navio->prox;
        posicao++;
      }
    }
};


int main () {
  Armazem *armazem = new Armazem;
  Deque *deque = new Deque;
  Navio *navio = new Navio;

  while (true) {
    Container *novo = new Container;

    string conteudo;
    int codigo;
    float peso;
    int escolha;
  
    cout << "\n1 - Adicionar container ao Armazem" << endl;
    cout << "2 - Mostrar Armazem" << endl;
    cout << "3 - Passar do armazem para o deque" << endl;
    cout << "4 - Mostrar deque (fila para navio)" << endl;
    cout << "5 - Passar do deuqe para o navio" << endl;
    cout << "6 - Mostrar navio" << endl;
    cin >> escolha;
    
    switch (escolha) {
      case 1:
        system("cls");
        

        cout << "Informe o Codigo" << endl;
        cin >> codigo;

        cout << "Informe o peso" << endl;
        cin >> peso;

        cout << "Informe o conteudo" << endl;
        cin >> conteudo;
        
        novo->setCodigo(novo, codigo);
        novo->setConteudo(novo, conteudo);
        novo->setPeso(novo, peso);

        armazem->push(novo);
        break;
      
      case 2:
        system("CLS");
        armazem->mostrar(armazem);
        break;
      
      case 3:
        system ("CLS");
        armazem = deque->receberContainers(armazem);
        break;

      case 4:
        system("CLS");
        deque->mostrar(deque);
        break;
      
      case 5:
        system("CLS");
        deque = navio->receberDeque(deque);
        break;
      
      case 6:
        system("CLS");
        navio->mostrar(navio);
        break;
      default:
        system("CLS");
        break;
    }
  }  
}