/*
4. Faça um algoritmo que receba como entrada 5 valores lidos do teclado e os  armazene em um vetor. 
Imprima o vetor original e posteriormente somente os valores que estão nas posições ímpares.
 As posições ímpares devem ser  identificadas pelo programa, por meio de fórmula apropriada.



*/

#include <stdio.h>


int main(){
    int valores[5];
    
    for(int i=0; i<5; i++){ 
        scanf("%d",&valores[i]);
    }
    printf("\nOs valores do vetor original sao: ");
    
    for(int i=0; i<5; i++)printf(" %d", valores[i]);
    

    printf("\nOs valores das posiçoes impares sao: ");
    for(int i =1; i<5; i+=2) printf(" %d", valores[i]);

}