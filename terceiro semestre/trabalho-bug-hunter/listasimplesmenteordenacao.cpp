#include <stdio.h>
#include "iostream"
#include <cstdlib>
#define TAM 2
typedef struct strLista{
    int n;
    strLista *prox;
} Lista;
void imprimir(Lista *l){
    if(l){
        printf("numero %d\n",l->n);
        imprimir(l->prox);
    }
}
Lista *ordena(Lista *raiz){
	Lista *atual=raiz, *prox, *aux, *anterior;
	while(atual != NULL){
	    prox=atual->prox;

		while(prox != NULL){
		    if(atual->n > prox->n){
		        if(atual == raiz)
		            raiz = prox;
		        else
		            anterior->prox = prox;
		        aux = atual;
		        atual->prox = prox->prox;
		        prox->prox = aux;
		        atual = prox;
		        prox = atual->prox;
		    } else
		        prox = prox->prox;
		}
		anterior = atual;
		atual=atual->prox;
	}
	return raiz;	
}
int main(){
    Lista *raiz, *atual, *temp;
    raiz = (Lista *)malloc(sizeof(Lista));
    printf("Digite um valor para raiz \n");
    scanf("%d", &raiz->n);
    raiz->prox = 0;
    atual = raiz;
    for(int i=0; i<TAM;i++){
        temp = (Lista *)malloc(sizeof(Lista));
        atual->prox = temp;
        printf("Digite um valor \n");
        scanf("%d", &temp->n);
        temp->prox = 0;
        atual = temp;
    }
    imprimir(raiz);
    printf("Ordenacao \n");
	raiz = ordena(raiz);
	printf("imprimir \n");
	imprimir(raiz);
}

