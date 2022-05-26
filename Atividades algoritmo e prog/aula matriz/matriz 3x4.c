
/*
    Dada a matriz float matriz[3][4], fazer um programa que:
    1 - Leia e armazene todos os valores nas posições da matriz
    2 - mostre essa matriz como:

    0               1               2               3
0   m[0][0]=7.5     m[][]=4         m[][]=99        m[][]=-5

1   m[][]=2.5       m[][]=1         m[][]=0         m[][]=-99.9

2   m[][]=7.5       m[][]=4         m[][]=99        m[][]=-5


*/
#include <stdio.h>

int main(){

    double matriz[3][4];
    int linha,coluna;


    for (linha=0;linha<=2;linha++){
        for(coluna = 0; coluna<=3;coluna++){
            scanf("%lf",&matriz[linha][coluna]);
        }

    }

    printf("\n\t\t0\t\t1\t\t2\t\t3\n");

    for (linha=0;linha<=2;linha++){
        printf("%d ",linha);
        for(coluna = 0; coluna<=3;coluna++){
            printf("\tm[%d][%d]=%.1lf",linha, coluna, matriz[linha][coluna]);
        }
        printf("\n");
    }



}

