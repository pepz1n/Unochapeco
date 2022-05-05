/*jogo adivinhe o numero
o programa deve gerar um numero randomico de 1 a 100 no inicio e o usuario tem 6 chances de acertar.
    se chutar um valor maior, mostrar: o numero e menor;
    se chutar um valor menor , mostrar : o numero e maior;
    se acertiy em ate 3 vezes: acertou e e muito sortudo
    se acertou em ate 5 vezes : acertou
    se acertou na ultima vez: ufa, foi por pouco!
    senao: game over ! perdeu!
*/
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main (){
    int aleatorio, numero, tentativas, cont;
    srand(time(NULL));
    aleatorio =1+ rand()%100;
    
    tentativas = 6;
    cont=0;
    printf("Jogo adivinhe o numero.");
    do {
        if (cont!=6){
             printf("\nEscolha um numero (%d tentativas restantes): ", tentativas);
             scanf("%d",&numero);
            if (numero>aleatorio)printf("O numero e menor.");
            if (numero<aleatorio)printf("O numero e maior.");
            cont++;
            tentativas--;
        }else{
            numero = aleatorio;
            cont++;
        }
    }while(numero!=aleatorio);

    if (cont<=3)printf("\nAcertou e e muito sortudo.\n");
    if (cont<=5 && cont>3)printf("\nAcertou.\n");
    if (cont==6)printf("\nAcertou e e muito sortudo.\n");
    if (cont==7)printf("\nGame over! perdeu, o numero era: %d\n",aleatorio);


    systemctl hibernate
}
