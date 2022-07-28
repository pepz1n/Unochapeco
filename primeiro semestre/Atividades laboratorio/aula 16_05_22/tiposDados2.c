#include <stdio.h>

int main(){
    int vet[4];
    int *pv;
    int tam = sizeof(vet)/sizeof(int);
    int i=0;

    for(pv = &vet; i < tam; i++){
        scanf("%d", pv);
        printf("\n %p - %d \n", pv, *pv);
        pv++; //para andar 4 bytes em memória

    }
}
