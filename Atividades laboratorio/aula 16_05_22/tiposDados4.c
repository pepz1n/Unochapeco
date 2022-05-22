#include <stdio.h>

int main(){
    int tamanho;
    scanf("%d", &tamanho);
    int *vetor;
    vetor = (int *) malloc(sizeof(int) * tamanho);

    int i=0;

    for(int *pv = &vetor; i < tamanho; i++){
        scanf("%d", pv);
        printf("\n %p - %d \n", pv, *pv);
        pv++; //para andar 4 bytes em memória

    }
}
