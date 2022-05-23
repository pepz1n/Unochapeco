#include <stdio.h>
#include <string.h>


int main(){
    int numero1, numero2, digitos;
    char num[30];
    scanf("%d %d",&numero1,&numero2);

    numero1 += numero2;
    itoa(numero1, num, 10);
    digitos = strlen(num);

    for(int i=0; i<digitos; i++){
        if(num[i] != '0'){
            printf("%c", num[i]);
        }
    }
    
    system ("pause");

}