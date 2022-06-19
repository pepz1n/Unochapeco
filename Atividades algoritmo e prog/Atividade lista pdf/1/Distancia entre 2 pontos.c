#include <Stdio.h>
#include <math.h>

int main(){
    float x1, x2, y1, y2, resultado;
    printf("\nDigite x1 e y1: ");
    scanf("%f %f",&x1,&y1);
    printf("\nDigite x2 e y2: ");
    scanf("%f %f",&x2,&y2);

    x1=(x2-x1)*(x2-x1);
    y2=(y2-y1)*(y2-y1);
    x1+=y2;
    resultado=sqrt(x1);

    printf("\nO resultado e: %f",resultado);

}