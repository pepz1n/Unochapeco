#include <stdio.h>
#include <cstdlib>
#define TAM 4
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
Lista *ordena(Lista *raiz) {
    Lista *atual, *prox, *anterior, *temp;
    int trocou = 1;

    while (trocou) {
        trocou = 0;
        anterior = NULL;
        atual = raiz;

        while (atual->prox) {
            prox = atual->prox;

            if (atual->n > prox->n) {
                trocou = 1;
                temp = prox->prox;

                if (anterior) {
                    anterior->prox = prox;
                } else {
                    raiz = prox;
                }

                prox->prox = atual;
                atual->prox = temp;
                anterior = prox;
            } else {
                anterior = atual;
                atual = prox;
            }
        }
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

