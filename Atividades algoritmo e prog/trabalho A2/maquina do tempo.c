/*
    Neste problema, dados os valores dos três créditos da máquina, seu programa deve dizer se é ou não possível viajar no tempo e voltar para o presente,
     fazendo pelo menos uma viagem e, no máximo, três viagens; sempre usando cada um dos três créditos no máximo uma vez

*/

#include <stdio.h>

int main(){
    int A, B, C;
    scanf("%d %d %d",&A,&B,&C);

    if((A-B)==0||(A-C)==0||(B-C)==0){
        printf("S\n");
    }else if((A+B-C)==0||(B-A+C)==0||(C-A+B)==0){
        printf("S\n");
    }else if((A-B-C)==0||(B-A-C)==0||(C-A-B)==0){
        printf("S\n");
    }else{
        printf("N\n");
    }
}