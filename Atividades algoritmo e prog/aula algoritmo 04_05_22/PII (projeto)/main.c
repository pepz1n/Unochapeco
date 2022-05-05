
   /*
5- Jogo do “piii”: o usuario deve digitar qual multiplo de 2 à 5 ele escolhe, e mostrar os numeros de 1 a 20, trocando os respectivos multiplos por “PI”.


Algoritmo_PII
	Inicio
		int numero, multiplo;

		Escreva (“Escolha um numero entre 2 e 5: “);
		Leia (multiplo);
		Se (multiplo>1 && multiplo<6)Entao:
			numero = 1
			Enquanto (numero < 20) Faça:
              		    Se (numero % multiplo == 0)Então
	                	Escreva (“PI”);
              		    Senao:
	               		 Escreva (numero);
               		    FimSe;
                	    numero++;
            		FimEnquanto;
		Senao:
			Escreva (“Numero invalido);
		FimSe;
	Fim
FimAlgoritmo
*/

#include <stdio.h>

int main(){
    int numero, multiplo;

    printf("\nEscolha um numero entre 2 e 5: ");
    scanf ("%d",&multiplo);
    if (multiplo>1 && multiplo<6){
        numero = 1;
        while (numero<=20){
            if (numero%multiplo == 0){
                printf("PI ");
            }else{
                printf ("%d ", numero);
            }
            numero++;
        }

    }else{
        printf("\nNumero invalido\n");
    }
system("pause");
}

