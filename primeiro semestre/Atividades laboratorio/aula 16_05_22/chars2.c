/* Aspectos sobre caracteres e strings em C
    1 - fazer a leitura "na unha" é preencher o vetor posição a posição
    2 - Dizer que uma string acabou é colocar o '\0' na ultima posicao
    3 - existem diferentes funções que tentar "facilitar" a leitura de char[]
    mas deve-se ter o entendimento de como ela funciona
*/

#include <stdio.h>
#include <string.h>

int main(){
    char msg[5];
    msg[0] = 'A';
    msg[1] = 'U';
    msg[2] = 'L';
    msg[3] = 'A';
    msg[4] = '\0';
    printf("\n MSG: %s", msg);

    printf("\n\nMostrando char a char: ");
    for(int i=0; i<5; i++){
        printf("%c", msg[i]);
    }

    printf("\nMostrando char a char (com inteiros): ");
    for(int i=0; i<5; i++){
        printf("%d ", msg[i]);
    }

    //funcao para devolver o tamanho de uma string
    printf("\nA string tem comprimento %d", strlen(msg));
    printf("\nA variavel tem tamanho %d", sizeof(msg));


}

/*
1 - Fazer um programa que liste a tabela ASCII completa (imprimíveis) em formato
char, int e hexadecimal.

*/
