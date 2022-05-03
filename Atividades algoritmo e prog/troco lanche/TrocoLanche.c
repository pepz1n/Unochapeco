/*
3 � Fazer um algoritmo que, dada uma lista de 4 lanches (podem inventar), ler a quantidade de unidades e calcular o valor do lanche. Ler o valor pago e calcular o troco.

E - qtde, lanche, valorPago
P - com base no lanche escolhido, calcular o valor
S - Troco

Algoritmo TrocoLanche
	Inicio
		inteiro qtde, lanche;
		real valorPago, valorLanche, Troco;

		escreva(�Tabela de Lanches:�);
		escreva(�1 - Pastel - 5,00�);
escreva(�2 - Coxinha - 4,50�);
escreva(�3 - Mini Pizza - 7,00�);
escreva(�4 - P�o de Queijo - 3,00�);
escreva(�Qual lanche vc quer? �);
leia(lanche);
escreva(�Quantos? �);
leia(qtde);
escolha(lanche)
	caso 1: valorLanche <- 5 * qtde;
		    escreva(�Escolheu pastel. Total: valorLanche);
		   parar;
	caso 2: valorLanche <- 4,5 * qtde;
		    escreva(�Coxinha. Total: valorLanche);
		   parar;
	caso 3: valorLanche <- 7 * qtde;
		    escreva(�Mini Pizza. Total: valorLanche);
		   parar;
	caso 4: valorLanche <- 3 * qtde;
		    escreva(�P�o de Queijo. Total: valorLanche);
		   parar;

	padrao: valorLanche = 0;
		    escreva(�Nao temos esse lanche�);
fim_escolha

leia(valorPago);
se(valorPago < valorLanche) ent�o
escreva(�Valor pago insuficiente.�);
 sen�o
	Troco = valorPago - valorLanche;
			escreva(�Bom lanche! Seu troco � �, Troco);
		fim_se
	Fim
Fim_Algoritmo

*/

#include <stdio.h>

int main(){
    int qtde, lanche;
    float valorPago, valorLanche, troco;

    printf("Tabela de Lanches: \n");
    printf("1 - Pastel - 5,00 \n");
    printf("2 - Coxinha - 4,50 \n");
    printf("3 - Pizza - 7,00 \n");
    printf("4 - Pao Queijo - 3,00 \n");
    printf("Qual lanche vc quer? ");
    scanf("%d", &lanche);
    printf("Quantos? ");
    scanf("%d", &qtde);

    switch(lanche){
        case 1:
            valorLanche = 5 * qtde;
            printf("\nPastel. Total: %f", valorLanche);
            break;
        case 2:
            valorLanche = 4.5 * qtde;
            printf("\nCoxinha. Total: %f", valorLanche);
            break;
        case 3:
            valorLanche = 7 * qtde;
            printf("\nPizza. Total: %f", valorLanche);
            break;
        case 4:
            valorLanche = 3 * qtde;
            printf("\nPao de Queijo. Total: %f", valorLanche);
            break;

        default: valorLanche = 0;
                 printf("\n\nNao temos esse lanche! \n");

    }

    if(valorLanche > 0){
        printf("\nInforme o valor pago: ");
        scanf("%f", &valorPago);
        if(valorPago < valorLanche){
            printf("\nValor insuficiente!");
        } else {
            troco = valorPago - valorLanche;
            printf("\nBom lanche! Troco: %f", troco);
        }
    }

}
