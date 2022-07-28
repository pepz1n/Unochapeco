/*
Dada uma matriz quadrada 3x3 armazenar em um vetir e mstrar, os elementos da diagonal princia

        0   1   2
    0   7   2   1
    1   3   7   4
    2   9   6   2
]

*/
#include<stdio.h>

int main(){
    int matriz[3][3];
    int vetor[3];
    int linha, coluna;

    for (linha=0;linha<=2;linha++){
        for(coluna = 0; coluna<=2;coluna++){
            fflush(stdin);
            scanf("%d",&matriz[linha][coluna]);
        }

    }
    vetor[0]=matriz[0][0];
    vetor[1]=matriz[1][1];
    vetor[2]=matriz[2][2];

    printf("S-> ");

    for(int i=0;i<3;i++)printf("%d ",vetor[i]);



}
