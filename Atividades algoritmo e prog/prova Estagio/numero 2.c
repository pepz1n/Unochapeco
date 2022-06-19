/*
2. Faça um algoritmo para ler uma quantidade indefinida de números inteiros e  
parar de ler quando for digitado um número negativo. 
O algoritmo deve  mostrar quantos números foram lidos e qual foi o maior número informado.
*/

#include <stdio.h>

int main(){
    int aux= 0;
    int numeros = 0; 
    int maior = 0;

    while(aux>=0){
        scanf("%d",&aux);
        if(aux>=0){ 
            if (aux>maior) maior=aux;
            numeros++;
       }

    }

    printf("\n%d numeros lidos\n",numeros);
    printf("\n%d foi o maior valor lido",maior);


}