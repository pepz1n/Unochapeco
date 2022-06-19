/*
1 - Fazer um programa que leia 7 inteiros e mostre na tela as
posicoes do vetor com os respectivos valores. Mostre tambem a
média dos valores
Exemplo de saída:
v[0] = 8
v[1] = 11
...
v[6] = 10

MEDIA DOS VALORES = 8.76

*/

#include <stdio.h>

int main(){
    int numeros[7];
    float media;

    for(int i=0; i<7; i++){
        printf("\nDigite um numero: ");
        scanf("%d",&numeros[i]);
    }
    
    
    media=0;
    
    
    for(int i=0; i<7; i++){
        media+= numeros[i];
    }
    media/=7;
    
    for(int i=0; i<7;i++) printf("\nv[%d] = %d", i, numeros[i]);
    printf("\n\nMEDIA DOS VALORES: %.2f",media);
}