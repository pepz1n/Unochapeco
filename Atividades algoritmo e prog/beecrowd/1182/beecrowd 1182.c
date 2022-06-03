#include <stdio.h>



int main(){
    float M[12][12],total=0;
    int coluna;
    char validacao;


    scanf("%d",&coluna);
    fflush(stdin);
    scanf("%c",&validacao);

    for(int i=0; i<12;i++){
        for(int j=0; j<12;j++){
            scanf("%f",&M[i][j]);
        }

    }

    for(int i=0; i<12;i++){
        total+=M[i][coluna];
    }

    if(validacao=='S'){
        printf("\n%.1f\n",total);
    }else if(validacao=='M'){
        total/=12;
        printf("\n%.1f\n",total);
    }
}
