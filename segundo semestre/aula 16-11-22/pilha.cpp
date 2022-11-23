#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Pilha {
  public:
    int x;
    Pilha *prox;

  Pilha () {
      this->x = 0;
      this->prox = NULL;
    };
    
  ~Pilha () {
    delete this;
  };

  bool vazia (Pilha *pilha) {
    if (!pilha->x && !pilha->prox) {
      return true;
    };
    return false;
  };

  void mostrar (Pilha *pilha) {
    while (pilha) {
      cout << pilha << " " << pilha->x << " " << pilha->prox << endl;
      pilha = pilha->prox;
    };
  };

  Pilha *topo (Pilha *pilha) {
    while (pilha) {
      if (!pilha->prox) {
        return pilha;
      };
      pilha = pilha->prox;
    }
    
  } 
  
  void push (Pilha *pilha, int entrada) {

    if (pilha->vazia(pilha)) {
      pilha->x = entrada;
      return;
    };

    Pilha *nova = new Pilha;
    nova->x = entrada;

    (pilha->topo(pilha))->prox = nova;
    return;
  };

  int pop (Pilha *pilha) {
    int valor;
    while (pilha) {
      
      if (!pilha->prox) {
        valor = pilha->x;
        pilha->x = 0;
        return valor;
      }
      if (!(pilha->prox)->prox) {
        valor = (pilha->prox)->x;
        delete (pilha->prox)->prox;
        pilha->prox = NULL;
        return valor;
      };    
      pilha = pilha->prox;
    }   
  };

  void drop (Pilha *pilha) {
    while (true) { 

      if (pilha->topo(pilha) == pilha) {
        pilha->prox = NULL;
        pilha->x = 0;
        return;
      };

      pilha->pop(pilha);
    };
  };

  void peloTopo (Pilha *pilha) {
    Pilha *forget = new Pilha;

    while (pilha) {
      forget->push(forget, pilha->x);
      pilha = pilha->prox;
    };

    system("cls");
    cout << "A partir do topo: " << endl;
    forget->mostrar(forget);

    fstream texto;
    texto.open("pilhaInversa.txt", fstream::out | fstream::trunc);


    while (!forget->vazia(forget)) {
      int valor = forget->pop(forget);
      texto << valor << endl;
    };
    texto.close();

    fstream entrada;
    int socorro;
    Pilha *nova = new Pilha;

    entrada.open("pilhaInversa.txt", fstream::in);

    while (entrada.good()) {
      string text;
      getline(entrada, text);
      socorro = stoi(text);
      nova->push(nova, socorro);
    };

    entrada.close();

    nova->mostrar(nova);
    system("pause");
  };
};


int main () {
  Pilha *pilha = new Pilha;
  while (true) {
    system ("cls");
    pilha->mostrar(pilha);
    cout << endl;
    cout << "1 - Push;" << endl;
    cout << "2 - Pop;" << endl;
    cout << "3 - Drop;" << endl;
    cout << "4 - Escrever a partir do topo;" << endl;
    int forget;
    cin >> forget;
    switch (forget) {
    case 1:
      system("cls");
      pilha->mostrar(pilha);

      cout << "Informe o valor a ser adicionado: " << endl;
      int entrada;
      cin >> entrada; 

      pilha->push(pilha, entrada);
      break;
    case 2:
      pilha->pop(pilha);
      break;
    case 3:
      pilha->drop(pilha);
      break;
    case 4:
      pilha->peloTopo(pilha);
    default:
      break;
    };
  }; 
};