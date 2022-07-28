/* 1- fazer um programa que mostre a tabuada do 9

*/
#include <stdio.h>

int main(){
    int numero, valor;
    numero = 0;

    while (numero <=10){
        valor= numero * 9;
        printf ("\n%d", valor);
        numero++;
    }
}
