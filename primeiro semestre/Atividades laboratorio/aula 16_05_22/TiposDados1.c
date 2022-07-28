/*
Tipos de dados:
    - Unitários: são as variáveis "simples"
    - inteiros, reais, caractere, etc.


*/
#include <stdio.h>

int main(){
    int x=12;
    int vet[20];
    char c;

    printf("Um inteiro ocupa %d bytes \n", sizeof(int));
    printf("Um caractere ocupa %d bytes \n", sizeof(char));
    printf("O vetor vet ocupa %d bytes \n", sizeof(vet));

    for(int i=0; i< 20; i++){
        vet[i] = i * 10;
        printf("\nGuardou na memoria na pos. %d", &vet[i]);
    }
    printf("\n\n");
    for(int i=0; i< 20; i++){
        printf("%d ", vet[i]);
    }

    // olhando para a MEMÓRIA DO COMPUTADOR
    printf("\n\nEndereco de memoria de x: %p", &x);

    //existe um tipo "especial" de variável que são os
    //ponteiros. Que nada mais é que um APONTAMENTO PARA UMA
    //área da memória
    int *pont; //isso quer dizer que pont aponta para memória
                //em um espaço destinado a um inteiro
    //vou dizer para pont apontar para a area de memoria de X
    pont = &x;
    printf("\n\nEndereco de memoria de x: %p", pont);

    //posso obter o valor armazenado no espaco de memoria com
    //o ponteiro...
    printf("\nNesse espaco de memoria tem %d", *pont);

    /*
        ponteiros - apontam para espaços de memória
        int *p - diz que essa variável é do tipo ponteiro na declaracao
        *p no programa - no espaço de memória, pega o valor
        &x - o "&" remete a um espaço de memória

    */



}
