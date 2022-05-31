#include <stdio.h>


int main(){
    int n,menor,posicao;
    scanf("%d",&n);
    int X[n];

    for(int i=0;i<n;i++){
        scanf("%d",&X[i]);
        if(i==0){
            menor=X[i];
            posicao=0;
        }else{
            if(menor>X[i]){
                menor=X[i];
                posicao=i;
            }
        }
    }
    printf("Menor valor: %d\n",menor);
    printf ("Posicao: %d\n",posicao);

}
