/* 3 fazer um programa que leia numeros enquanto nao for digitado um valor negativo, e mostre:
-numero lidos
total de pares
total de impares
total de zeros
media
maior valor
menor valor
*/


#include <stdio.h>

int main(){
    int maior, menor, aux, pares, impares, zeros, media, cont;
    maior = 0;
    zeros = 0;
    pares = 0;
    impares = 0;
    media = 0;
    cont = 0;
    menor = 99999;
    
    do{
        printf("\n informe um numero: ");
        scanf("%d", &aux);
        if (aux==0)zeros++;
        if (aux>0){
            if (aux%2==0){
                pares++;   
            }else{
                impares++;
            }
            if (aux>maior)maior=aux;  
            if (aux>0 && aux<menor)menor=aux;
            media= media+aux;  
            cont++;
        }   
    }while(aux>=0);

    
    
    media = media/cont;
   
   
    printf("\nO total de numeros lidos foi: %d", cont);
    printf("\nO total de pares lidos foi: %d", pares);
    printf("\nO total de impares lidos foi: %d", impares);
    printf("\nO total de zeros lidos foi: %d", zeros);
    printf("\nA media total foi: %d", media);
    printf("\nO maior valor foi: %d", maior);
    printf("\nO menor valor foi: %d\n", menor);

    system ("pause");
}
