// fazer um programa que dado um tamanho mostre no formato de matriz quadrada

#include <stdio.h>


int main(){
    int cont, tamanho;
    scanf ("%d", &tamanho);

    for (cont = 1; cont<=tamanho*tamanho; cont++){
        printf ("%d \t", cont);
        if (cont% tamanho ==0)
            printf("\n");
    }
}
