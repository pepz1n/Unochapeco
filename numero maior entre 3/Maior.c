
#include <stdio.h>

int main(){
    int a, b, c; //declaração de variaveis

    printf("Escreva o primeiro numero: \n");
    scanf("%d", &a);
    printf("Escreva o segundo numero:\n");
    scanf("%d", &b);
    printf("Escreva o terceiro numero:\n");
    scanf("%d", &c);
    
    if(a>b){
        if(a>c){
          if(b>c){
              printf("\nOs numeros em ordem sao:%d, %d, %d", a, b, c);
        } else {
                printf("\nOs numeros em ordem sao:%d, %d, %d", a, c, b);
            }
        } else { //Else do if da linha 15 para se a<c
            printf("\nOs numeros em ordem sao:%d, %d, %d", c, a, b);
        }  
    } else { //Else do if da linha 14 para se a<b
        if(b>c){
            if(a>c){
                printf("\nOs numeros em ordem sao:%d, %d, %d", b, a, c);
            } else{
                printf("\nOs numeros em ordem sao:%d, %d, %d", b, c, a);
            }
        } else{
            ("\nOprintfs numeros em ordem sao:%d, %d, %d", c, b, a);
        }
    }
}