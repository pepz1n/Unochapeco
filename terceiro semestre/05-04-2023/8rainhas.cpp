/*
Problema 8 rainhas.
Algoritmo que verifica e imprime todas as 92 possibilidades de resolu��o,
utilizando t�cnicas de espelhamento e an�lise estocastica, escrita em forma de
algortimo.
*/
#include <stdio.h>
#include <stdlib.h>
#define TAM 15
using namespace std;
int rainhas[TAM], resultado=0;
//Note que as rainhas n�o ficam em uma matriz, pois n�o h� a necessidade real
//j� que n�o usaremos as colunas que tiverem rainhas, deste modo, no vetor
//armazeno apenas o n�mero da linha onde est� a rainha
void insere(int var);//fun��o que insere o n�mero das linhas no vetor rainhas
bool disponibilidade(int linha, int coluna);//fun��o que verifica a disponibilidade
//do campo a ser inserido
void imprime();//fun��o de impress�o, faz um desenho de uma matriz sem usar
//efetivamente uma matriz

int main(int argc, char *argv[])
{
    insere(0);//Fun��o de inser��o dos elementos
    return EXIT_SUCCESS;
}


void insere(int var){
    int cont;
    for(cont=0;cont<TAM;cont++)//percorre as oito posi��es da matriz imagin�ria
        if(disponibilidade(var,cont)){//fun��o de disponibilidade
            rainhas[var]=cont;//caso verdadeiro salva a linha onde ser� impressa
            //a rainha na posi��o var do vetor que vai de 1 a 8
            if(var==TAM-1)//se terminou de posicionar imprime a matriz
                imprime();//fun��o de impress�o
            else
                insere(var+1);//se n�o usa recursividade e chama a pr�pria fun��o em
            //uma posi��o a frente
        }
}

void imprime(){
    char imprime[1];//Caractere a ser impresso
    resultado++;//Contador de resultados 92 � o total
    printf("Resultado %d\n",resultado);//imprime o n�mero de resultados
    for(int i=0;i<TAM;i++){//percorre as posi��es para montar a matriz de 8 linhas
        for(int x=0;x<TAM;x++){//para montar as 8 colunas
            if(x==rainhas[i])//verifica se � para imprimir um rainha ou espa�o sem nada
                imprime[0]='R';//rainha
            else
                imprime[0]='N';//espa�o sem nada
            printf("%c ",imprime[0]);//imprime
        }
        printf("\n");//quebra de linha
    }
}

bool disponibilidade(int linha, int coluna){
    int l, c, cont=-1;//variaveis de controle
    for(cont;cont<2;cont++){//faz t�s passagens pela l�gica e serve de vari�vel de ajuste
        l = linha-1;//defini��o do valor a testar, note que vai sendo incrementado
        //ao ser chamado tamb�m
        c = coluna+cont;//defini��o da coluna a testar, depende dos valores de cont e da coluna
        while((l>=0) && (c>=0) && (c<TAM)){//Se est� dentro do espa�o reservado
            if(c == rainhas[l])//se tem rainha na posi��o
                return false;//n�o pode alocar pois j� existe uma posi��o salva
            else {
                l-=1;//altera valores para continuar os testes
                c+=cont;//das posi��es e do espa�o a ser utilizado
            }
        }
    }
    return true;//caso haja a possibilidade de aloca��o retorna true
}
