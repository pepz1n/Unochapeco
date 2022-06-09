/*
Desafio

usando apenas ponteiros, fazer um programa que:

- Tenha uma unica variavel no main; (certo)
- Tenha uma funçao para ler o valor com ponteiro
- Tenha uma função que receba o ponteiro e dobre seu valor (certo)
- Tenha um funçao que receba o ponteiro e mostre o resultado (certo)

*/

#include <stdio.h>

int dobro(int *nro);
int resultado(int *nro);


int main(){
    int nro;
    scanf("%d",&nro);
    resultado(&nro);
    dobro(&nro);


}

int dobro(int *endnro){
    *endnro*=2;
    printf("\nO dobro do numero informado e: %d seu local na memoria e: %p",*endnro, endnro);
}
int resultado (int *endnro){
    printf("\nO valor e: %d ",*endnro);
}




