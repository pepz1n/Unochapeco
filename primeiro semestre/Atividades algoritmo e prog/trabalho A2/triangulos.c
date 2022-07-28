/*
Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A representa o maior dos 3 lados. 
A seguir, determine o tipo de triângulo que estes três lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem adequada:


se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES

*/


#include <stdio.h>

int main(){
    double a, b, c, aux;
    scanf("%lf %lf %lf",&a,&b,&c);
    
    if(c>b){
        aux=b;
        b=c;
        c=aux;
    }
   
    
    if(b>a){
        aux = a;
        a=b;
        b=aux;
    }
    
    if(c>b){
        aux=b;
        b=c;
        c=aux;
    }
   

    if(a>= b+c){
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    
    a*=a;
    b*=b;
    c*=c;

    if(a==b+c) printf("TRIANGULO RETANGULO\n");

    if(a>b+c) printf("TRIANGULO OBTUSANGULO\n");

    if(a<b+c) printf("TRIANGULO ACUTANGULO\n");

    if(a==b^b==c) printf("TRIANGULO ISOSCELES\n");
    if(a==b&&b==c) printf("TRIANGULO EQUILATERO\n");
    
    
}