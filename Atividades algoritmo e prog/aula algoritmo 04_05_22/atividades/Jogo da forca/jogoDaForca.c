#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int main(){
    char palavra[30], digitadas[30], lacunas[30],letradigi[5];
    int letras, vidas = 6, pontos = 0, fim;
    
    printf("\nBem vindo ao jogo da forca!!");
    printf("\n\nDigite uma palavra: ");
    gets(palavra);
    setbuf(stdin, NULL);

    letras = strlen(palavra);

    for (int i = 0 ; i < letras ; i++) {
        lacunas[i] = '?' ;

    }
    fim = letras;
    lacunas[fim] = '\0';

    
    
    while (vidas>0||pontos!=letras){
        printf("\n\n%s\n", lacunas);
        printf("\ndigite uma letra: ");
        gets(letradigi);
        setbuf(stdin, NULL);
        int x = 0;

        for (int i = 0 ;i< letras ; i++) {
            if (letradigi[0]==palavra[i]) {
                lacunas[i] = palavra[i];
                x++;
                pontos++;
            }


        }
        if (x==0){
            vidas--;
            printf("\nletra incorreta");
            printf("\nVidas totais: %d",vidas);
        }else{
            printf("\nLetra correta");
            printf("\nVidas totais: %d",vidas);
        }
        printf("\npontos: %d",pontos);
        printf("\nletras: %d",letras);
    
    
    
    }
    system("PAUSE");

}