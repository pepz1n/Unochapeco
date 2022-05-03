/*
1- Fazer um algoritmo/prorama que mostre os numeros pares de 0 a 100;

AlgoritmoPar_0_A_100
	Inicio
		Int numeros
		numero = 0
        Enquanto (numeros <= 100) faça:
			se (numero % 2 ==0) Entao:
				Escreva (numero);
			numero ++;

		Fimenquanto;
	Fim
FimAlgoritmo

*/


 #include <stdio.h>
int main(){

int numeros;
numeros = 0;

     while(numeros <= 10000000) {
        printf("\n%d ", numeros);
        numeros = numeros + 2;
    }
system("pause");
}
