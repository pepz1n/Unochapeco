/*
3- Fazer um algoritmo que leia numeros inteiros até não ser digitado o numero -99 e, ao final, diga qual o maior numero digitado;

	AlgoritmoNumeros
		Inicio
			int maior, aux;
            maior = 0
			Enquanto (aux != -99) Faça:
				Escreva (“informe um numero: “);
				Leia (aux);
				Se (aux != -99 && aux>maior) Entao:
					maior = aux;
				FimSe;
			FimEnquanto
			Escreva (“o maior numero digitado foi: “, maior);
		Fim
	FimAlgoritmo
				
*/

#include <stdio.h>

int main(){
    int maior, aux;
    maior = -999999999;
    while (aux != -99){
        printf("\nInforme um numero: ");
        scanf ("%d", &aux);
        if (aux != -99 && aux>maior){
            maior = aux;
        }
    }
    printf("\n O maior numero informado foi: %d\n", maior);
    system("pause");
}