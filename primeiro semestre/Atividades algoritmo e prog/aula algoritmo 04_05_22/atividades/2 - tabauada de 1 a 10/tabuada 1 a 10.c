/*
2- fazer um programa que mostre a tabuada de todos os numeros de 1 a 10
*/


#include <stdio.h>

int main(){
    int numero, valor, resultado;
    

   for (numero= 1; numero<= 10; numero++){
       for (valor= 0; valor<=10; valor++){
           resultado = valor*numero;
            printf("%d ", resultado);
            if (resultado/10 == numero){
                printf("\n");
            }
       }
   }
}
