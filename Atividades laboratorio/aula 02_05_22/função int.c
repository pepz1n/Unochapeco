

#include <stdio.h>

int bernardo(int numero2,int numero3){          //função de numeros inteiros
    int resultado;
   resultado = numero2 + numero3;
   return (resultado);
}


int main(){                                      //função main do código
    int v1, v2, resultado;
    scanf("%d",&v1);
    scanf("%d",&v2);
    resultado = bernardo(v1,v2);                //buscando a função BERNARDO para fazer o calculo
    printf("%d",resultado);
}