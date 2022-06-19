#include <stdio.h>
#include <math.h>


int main(){

    float salario, imposto;
    scanf ("%f",&salario);

    if (salario<=2000){
        printf("Isento\n");

    }else if(salario<=3000){
            salario -=2000;
            imposto = salario*0.08;
            printf ("R$ %.2f\n",imposto);
        }else if(salario<=4500){
            salario-=3000;
            imposto = 80;
            imposto+=salario*0.18;
            printf ("R$ %.2f\n",imposto);

        }else{
            salario-=4500;
            imposto = 350;
            imposto+=salario*0.28;
            printf ("R$ %.2f\n",imposto);  
        }

    

}