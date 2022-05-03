/* 2- Fazer um algoritmo/programa que, dados 2 nímeros inteiros. mostre os numeros desse intervalo, em ordem crescente;

	AlgoritmosNumeroMaior
		Inicio
			Int numero1, numero2;
			Escreva (“informe o primeiro numero: “);
			Leia(numero1);
			Escreva (“informe o segundo numero: “);
			Leia(numero2);
            Se (numero1<numero2) Entao:
				Enquanto (numero1 <= numero2) faça:
					Escreva (numero1);
					numero1++;
				FimEnquanto;
			Senao:
				Enquanto (numero2<=numero1) faça:
					Escreva (numero2);
					numero2++;
				Fimenquanto;
			FimSE
		Fim
	FimAlgoritmo
*/


#include <stdio.h>

int main(){

    int numero1, numero2;
    printf("\ninforme o primeiro numero: ");
    scanf ("%d",&numero1);
    printf("\ninforme o segundo numero: ");
    scanf ("%d",&numero2);
    
    
    if (numero1<numero2){
        while(numero1<=numero2){
            printf("%d ", numero1);
            numero1++;
        }
    }else{
        while(numero2<=numero1){
            printf ("%d ", numero2);
            numero2++;
        }
    }
    system("pause");
}
