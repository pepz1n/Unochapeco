/*
emcapsulamento;
atributos;
metodos;
classes;
bubble sort;
polimorfismo;
estruturas de pilha, fila, lista simples, lista dupla;
*/
// quick sort

#include <iostream>
using namespace std;

class Fila {
  public:
    int x;
    Fila *prox;

    Fila () {
      this->x = 0;
      this->prox = nullptr;
    }
    ~Fila(){
      delete this;
    }

    static void push (Fila *fila, int valor) {

      if (!fila->prox && !fila->x) {
        fila->x = valor;
        return;
      };

      Fila *nova = new Fila;
      nova->x = valor;
      fila->prox = nova;

      return;
    }

    Fila *cauda (Fila *fila) {
      while (fila) {
        if (!fila->prox) {
          return fila;
        };
        
        fila = fila->prox;
      };      
    }

    Fila *cabeca (Fila *fila) {return fila;}

    Fila *pop (Fila *fila) {
      Fila *aux = fila;
      fila = fila->prox;
      delete aux;
      return fila;
    }

    Fila *drop (Fila *fila) {
      Fila *cauda = fila->cauda(fila);
      cauda->x = 0;
      return cauda;
    }
};