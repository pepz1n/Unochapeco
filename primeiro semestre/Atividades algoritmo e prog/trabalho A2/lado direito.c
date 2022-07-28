/*
A primeira linha de entrada contem um único caractere Maiúsculo O ('S' ou 'M'), indicando a operação (Soma ou Média) que deverá ser realizada com os 
elementos da matriz. Seguem os 144 valores de ponto flutuante que compõem a matriz.
*/


#include <stdio.h>

int main(){
    double matriz[12][12];
    char conta;
    double resultado=0;
    int contador=0;
    int i,j;

    scanf("%c",&conta);
    
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            scanf("%lf",&matriz[i][j]);
        }
    }
   
    for (i=1; i<=10; i++){
        if(i<=5){ 
            for(j=11;j>11-i;j--){
                resultado+=matriz[i][j];
                contador++;
            }
        }else{
            for(j=11;j>i;j--){
                resultado+=matriz[i][j];
                contador++;
            }
        }
    }

    if(conta=='S'){
        printf("%.1lf\n",resultado);
    }else{
        printf("%.1lf\n",resultado/contador);
    }




}