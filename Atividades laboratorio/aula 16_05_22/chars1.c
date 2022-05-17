/* CARACTERES E VETORES DE CARACTERES

O que é um "char"?
É um símbolo que pode ser lido/escrito de diferentes maneiras, com base
na sua representação PADRONIZADA da tabela ASCII. Esses símbolos podem
ser imprimíveis ou não
- não imprimíveis - 0 a 31
- imprimíveis ASCII normal - 32 a 126
- 127 - é o delete
- imprimíveis ASCII extendida - 128 até 255


O que é um "char[]"?
- É um vetor de char (caractere)
- COnvenciona-se dizer que um vetor de caracteres é uma "STRING"
- Uma string é um CONJUNTO SEQUENCIAL DE CARACTERES


*/


#include <stdio.h>

int main(){
    char c;
    char nome[20];
    printf("Um char ocupa %d bytes \n", sizeof(char));
    c = '!';
    printf("c = %c (char) %d (int) %x (hexa) %o (octal)  \n", c, c, c, c);

    printf("Nome ocupa %d bytes \n", sizeof(nome));

    //scanf("%s", nome);
    gets(nome);

    printf("\nMostrando os caracteres do nome: ");
    for(int i=0; i<20; i++){
        printf("%c", nome[i]);
    }


}
