
#include <stdio.h>

int main(){
    int a, b, c;

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
          }  
        }
    }
}