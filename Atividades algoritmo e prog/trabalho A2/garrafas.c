#include <stdio.h>

void main (){

    int contador;
    int comprados, garrafas;
    int i;
    scanf("%d", &contador);
    while (contador--){
        scanf("%d %d", &comprados, &garrafas);
        int contador = 0;
        for (i = comprados; i >= garrafas; i -= garrafas)
            ++contador;
        printf("%d\n", contador + i);
    }

}