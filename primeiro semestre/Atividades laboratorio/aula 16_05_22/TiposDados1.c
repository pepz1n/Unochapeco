/*
Tipos de dados:
    - Unit�rios: s�o as vari�veis "simples"
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

    // olhando para a MEM�RIA DO COMPUTADOR
    printf("\n\nEndereco de memoria de x: %p", &x);

    //existe um tipo "especial" de vari�vel que s�o os
    //ponteiros. Que nada mais � que um APONTAMENTO PARA UMA
    //�rea da mem�ria
    int *pont; //isso quer dizer que pont aponta para mem�ria
                //em um espa�o destinado a um inteiro
    //vou dizer para pont apontar para a area de memoria de X
    pont = &x;
    printf("\n\nEndereco de memoria de x: %p", pont);

    //posso obter o valor armazenado no espaco de memoria com
    //o ponteiro...
    printf("\nNesse espaco de memoria tem %d", *pont);

    /*
        ponteiros - apontam para espa�os de mem�ria
        int *p - diz que essa vari�vel � do tipo ponteiro na declaracao
        *p no programa - no espa�o de mem�ria, pega o valor
        &x - o "&" remete a um espa�o de mem�ria

    */



}
