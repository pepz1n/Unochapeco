
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
              printf("\nO numero %d e maior que o numero %d e o numero %d.\n", a, b, c);
          } else { //Else do if da linha 16
                printf("\nO numero %d e maior que o numero %d e o numero %d.\n", a, c, b);
          }// Fim do else da linha 18
        } else { //Else do if da linha 15 para se a<c
            printf("\nO numero %d e maior que o numero %d e o numero %d.\n", c, a, b);
        } //Fim do else da linha 21 
    } else { //Else do if da linha 14 para se a<b
        if(b>c){
            if(a>c){
                printf("\nO numero %d e maior que o numero %d e o numero %d.\n", b, a, c);
            } else { // Else do if da linha 26
                printf("\nO numero %d e maior que o numero %d e o numero %d.\n", b, c, a);
            }
        } else { //Else do if da linha 25
            if(b>a){
                printf("\nO numero %d e maior que o numero %d e o numero %d.\n", c, b, a);
            }//Fim do if da linha 32
        }//Fim do else da linha 31
    }//Fim do else da linha 24
    if(a==b && b==c){
        printf("\nTodos os numeros sao iguais: %d, %d, %d\n", a, b, c);
    }//Fim do if da linha 37
    system("PAUSE");//Para o executável não fechar sozinho
}//Fim do código
