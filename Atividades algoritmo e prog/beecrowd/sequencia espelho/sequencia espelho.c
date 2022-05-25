#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    
    int casos, numero1, numero2,contador=0,tamanho;
    int aux, aux2, i;
    
    
    scanf("%d",&casos);


   while (casos--){

		scanf("%d %d", &numero1, &numero2);

		for (i = numero1; i <= numero2; i++)
			printf("%d", i);


    for (int i = numero2; i >= numero1; i--){
			aux = i;
			while (aux){
				aux2 = aux%10;
				printf("%d", aux2);
				aux = aux/10;
			}

		}	

		printf("\n");
    }
}