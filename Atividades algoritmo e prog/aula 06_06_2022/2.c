/*
    2- fazer uma funçao que receba um vetor e um valor, e retorne um char X se não esta no vetor e 0 se esta no vetor

*/

#include <stdio.h>
#define NUM 5


char esta(int num1[NUM], int valor){
    for (int i=0;i<NUM;i++){
        if (num1[i]==valor){
            return 'x';
        }else return 0;

    }

}


int main(){
    int numero;
    int vetor[NUM];
    char valor;
    printf("Digite um vetor: ");
    for(int i=0; i<NUM;i++){
        scanf("%d",&vetor[i]);
    }
    scanf("%d",&numero);

    valor= esta(vetor,numero);

    printf("%c",valor);

}
