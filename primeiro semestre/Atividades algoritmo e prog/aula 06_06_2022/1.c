/*
    1- fazer uma funcao que leia 3  notas (float) e seus pesos percentuais (int) e calcule e retone a media do aluno
        obs: no main, rodar um laço para calcular a media de 3 alunos.
*/

#include <stdio.h>


float media(float nota1,float nota2,float nota3,float peso1, float peso2, float peso3){
    float valor;
    nota1*=peso1;
    nota2*=peso2;
    nota3*=peso3;
    valor= nota1+nota2+nota3;
    valor/=100;
    return valor;

}


int main(){
    float nota1, nota2, nota3,total;
    int peso1, peso2, peso3;

    for(int i=1;i<4;i++){
        printf("\n\n\nInforme 3 notas do aluno %d: ",i);
        scanf("%f %f %f",&nota1, &nota2, &nota3);
        printf("\nInforme os 3 pesos do aluno %d: ",i);
        scanf("%d %d %d",&peso1, &peso2, &peso3);

        total= media(nota1,nota2,nota3,peso1,peso2,peso3);
        printf("\nMedia do aluno %d = %f",i,total);
    }
}
