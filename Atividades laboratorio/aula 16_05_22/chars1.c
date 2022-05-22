/* CARACTERES E VETORES DE CARACTERES

O que � um "char"?
� um s�mbolo que pode ser lido/escrito de diferentes maneiras, com base
na sua representa��o PADRONIZADA da tabela ASCII. Esses s�mbolos podem
ser imprim�veis ou n�o
- n�o imprim�veis - 0 a 31
- imprim�veis ASCII normal - 32 a 126
- 127 - � o delete
- imprim�veis ASCII extendida - 128 at� 255


O que � um "char[]"?
- � um vetor de char (caractere)
- COnvenciona-se dizer que um vetor de caracteres � uma "STRING"
- Uma string � um CONJUNTO SEQUENCIAL DE CARACTERES


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
