/*
1. Um sistema de uma empresa de ônibus deve indicar entre os seus  passageiros, se estes são pagantes ou não. 
Os passageiros não pagantes estão  classificados conforme a lista a seguir: 
a. cidadãos com 60 anos ou mais e aposentados; 
b. pessoas com necessidades especiais; 
c. todos os demais são pagantes.  
Faça um algoritmo que retorne mensagens informando se uma pessoa é  pagante ou não, para o sistema em questão. 
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
    int idade, resultado;
    char necessidades;

    
    printf("\nOla, bem vindo ao sistema de passagens, informe sua idade por gentileza: ");
    scanf("%d",&idade);
    
    printf("\nInforme caso tenha alguma necessidade especial (s ou n): ");
    fflush (stdin);
    scanf("%c",&necessidades);

    
    if(necessidades=='s'){
        printf("\nVoce tem direito a passagem gratuita!");
        
    }else{
        if(idade>=60){
            printf("\nVoce tem direito a passagem gratuita!");
        }else printf("\nVoce nao tem direito a passagem gratuita!");
    
    }
    

}


