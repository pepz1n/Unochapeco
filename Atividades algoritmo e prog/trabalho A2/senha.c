#include <stdio.h>


int main(){
    int senha=2002;
    int aux=0;

    do{

        scanf("%d",&aux);
        if(aux!=senha){
            printf("Senha Invalida\n");
        }else{
            printf("Acesso Permitido\n");
        }

    }while(aux!=senha);

}