/*
3 - Fazer um programa que leia 5 despesas e armazene. O programa
deve somar as despesas, ler o salario e mostrar o saldo
Exemplo de saida:

RELATORIO MENSAL:
Suas despesas: 450.00 900.00 34.00 19.90 199.00
SALARIO:    R$ 2.300,00
DESPESAS:   R$ 2.100,00
-------------------------
SALDO:      R$ 200,00

*/

#include <stdio.h>

int main(){
    float despesas[5];
    float salario;
    float totaldespesas = 0;
    float saldo;

    for(int i=0; i<5;i++){
        printf("\nDigite o valor da despesa: ");
        scanf("%f",&despesas[i]);
        totaldespesas+=despesas[i];
    }
    printf("\nDigite o seu salario: ");
    scanf("%f",&salario);
    saldo = salario-totaldespesas;
    
    printf("\nRELATORIO MENSAL:");
    printf("\nSuas despesas:");
    for(int i=0; i<5; i++)printf(" %.2f",despesas[i]);
    printf("\nSALARIO:    R$ %.2f",salario);
    printf("\nDESPESAS:   R$ %.2f",totaldespesas);
    printf("\n----------------------");
    printf("\nSALDO:      R$ %.2f",saldo);
    
}