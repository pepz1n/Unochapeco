/*
1 - Fazer um algoritmo que, dada uma equação do segundo grau no formato aX2 + bX + c = 0,
calcule suas raízes reais, se existirem.

1 - Rascunho de entendimento do problema:
E - a,b,c
P - calcular delta e depois, ver se tem uma, duas ou nenhuma raiz
S - raíz/raízes/sem raiz real

2 - Formalização do algoritmo
Algoritmo Equacao2Grau
	real a,b,c, delta, x1,x2;
	início
        leia(a,b,c);
        delta = potencia(b,2)  -  4*a*c;
        //ou delta = b*b - 4*a*c;
        //com delta, posso verificar quantas raízes terei
        se ( delta < 0 ) então
          escreva(“Não existem raízes reais”);
        senão
            x1 = ( -b + raiz ( delta) ) / (2 * a);
            se ( delta == 0 ) então
              x2 = x1; //copio x1 para x2
            senão
                x2 = ( -b - raiz ( delta) ) / (2 * a);
            fim_se
         escreva(“Raízes encontradas: “, x1, x2);
        fim_se
    fim
FimAlgoritmo

3 - Implementação do algoritmo usando a linguagem de programação C

Casos de teste:
Teste 1:
E - a = 1, b = -5, c = 6
S - X1 = 3 e X2 = 2

Teste 2:
E - a = 4, b = -4, c = 1
S - X1 = 0.5 e X2 = 0.5

Teste 3:
E - a = 5, b = 1, c = 6
S - X1 = 0.5 e X2 = 0.5
*/

#include <stdio.h>
#include <math.h>

float a,b,c,delta, x1,x2;

int main(){
    scanf("%f %f %f", &a,&b,&c);
    delta = pow(b,2) - 4 * a * c;
    if( delta < 0){
        printf("\nNao existem raizes reais");
    }//fim do if da linha 9
     else {
           x1 = (-b + sqrt(delta) ) / (2 * a);
           if(delta == 0){
                x2 = x1;
           }//fim do if da linha 14
           else {
                x2 = (-b - sqrt(delta) ) / (2 * a);
           }//fim do else da linha 18

         printf("\nRaizes: %f e %f ", x1, x2);

     }//fim do else da linha 12


}
