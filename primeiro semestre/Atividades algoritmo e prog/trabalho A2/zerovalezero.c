/*
Escreva um programa que, dado dois números inteiros, sem o algarismo zero, some os mesmos e, 
caso o resultado tenha algum algarismo zero, que os retire antes de exibir.
*/
#include <stdio.h>
#include <string.h>
int main(){
    int numero1, numero2, digitos;
    char num[30];
    while(1){
        scanf("%d %d",&numero1,&numero2);
        if(numero1==0 && numero2==0)break;
        
        numero1 += numero2;
        numero2=sprintf(num, "%d", numero1);
        num[numero2+1]='\0';

        for(int i=0; i<numero2; i++){
            if(num[i] != '0'){
                printf("%c",num[i]);
            }
        }
        printf("\n");
    }
    return 0;
}


