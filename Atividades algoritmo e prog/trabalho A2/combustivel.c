/*
Um Posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes. Escreva um 
algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma: 1.Álcool 2.Gasolina 3.Diesel 4.Fim). 
Caso o usuário informe um código inválido (fora da faixa de 1 a 4) deve ser solicitado um novo código (até que seja válido).
O programa será encerrado quando o código informado for o número 4.
*/


#include <stdio.h>

int main(){
    int numero;
    int alcool,gasolina, diesel;
    alcool = 0;
    gasolina = 0;
    diesel = 0;

    do{
        scanf("%d",&numero);
        switch(numero){
            case 1:
                alcool++;
                break;
            case 2:
                gasolina++;
                break;
            case 3:
                diesel++;
                break;
        }
    }while(numero!=4);

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",alcool);
    printf("Gasolina: %d\n",gasolina);
    printf("Diesel: %d\n",diesel);
}