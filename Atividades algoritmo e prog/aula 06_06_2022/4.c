#include <stdio.h>
#include <string.h>



int comparar(char oi[50],char tchau[50]){
    int valor;
    valor= strcmp(oi,tchau);
    return valor;


}





int main(){
    char string1[50];
    char string2[50];
    int resultado;

    fflush(stdin);
    gets (string1);
    fflush(stdin);
    gets (string2);


    resultado=comparar(string1,string2);
    printf("%d",resultado);


}
