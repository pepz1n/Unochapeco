
#include <stdio.h>

int main(){
    int a, b, c; //declaração de variaveis

    printf("Escreva o primeiro numero: \n");
    scanf("%d", &a);//Leitura do primeiro numero para variavel "a"
    printf("Escreva o segundo numero:\n");
    scanf("%d", &b);//Leitura do segundo numero para variavel "b"
    printf("Escreva o terceiro numero:\n");
    scanf("%d", &c);//Leitura do terceiro numero para variavel "c"
    
    if(a>b){
        if(a>c){
          if(b>c){
              printf("\nOs numeros em ordem sao:%d, %d, %d", a, b, c);
          } else { //Else do if da linha 16
                printf("\nOs numeros em ordem sao:%d, %d, %d", a, c, b);
          }// Fim do else da linha 18
        } else { //Else do if da linha 15 para se a<c
            printf("\nOs numeros em ordem sao:%d, %d, %d", c, a, b);
        } //Fim do else da linha 21 
    } else { //Else do if da linha 14 para se a<b
        if(b>c){
            if(a>c){
                printf("\nOs numeros em ordem sao:%d, %d, %d", b, a, c);
            } else { // Else do if da linha 26
                printf("\nOs numeros em ordem sao:%d, %d, %d", b, c, a);
            }
        } else { //Else do if da linha 25
            if(b>a){
                printf("\nOs numeros em ordem sao:%d, %d, %d", c, b, a);
            }//Fim do if da linha 32
        }//Fim do else da linha 31
    }//Fim do else da linha 24
}//Fim do código