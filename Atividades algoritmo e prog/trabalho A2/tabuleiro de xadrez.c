/*
Entrada
A primeira linha da entrada contém um inteiro L (1 ≤ L ≤ 1000) indicando o número de linhas do tabuleiro. 
A segunda linha da entrada contém um inteiro C (1 ≤ C ≤ 1000) representando o número de colunas.

Saída
Imprima uma linha na saída. A linha deve conter um inteiro, representando a cor da casa no canto 
inferior direito do tabuleiro: 1, se for branca; e 0, se for preta.
*/


#include <stdio.h>


int main(){
    int linha, coluna;

    scanf("%d",&linha);
    scanf("%d",&coluna);

    if ((linha%2)==0){
        if ((coluna%2) == 0){
            printf("1\n");
        }else{
            printf("0\n");
        }
    }else{
        if ((coluna%2)==0){
            printf("0\n");
        }else{
            printf("1\n");
        }
    }


}