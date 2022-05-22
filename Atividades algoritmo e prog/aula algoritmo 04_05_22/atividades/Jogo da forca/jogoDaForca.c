#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int main(){
    char palavra[30], digitadas[30], lacunas[30],letradigi[5];
    int letras, vidas = 6, pontos = 0, a=0;
    
    printf("\nBem vindo ao jogo da forca!!");
    printf("\n\nDigite uma palavra: ");
    gets(palavra);
    setbuf(stdin, NULL);

    
    letras = strlen(palavra);

    
    for (int i = 0 ; i < letras ; i++) {
        lacunas[i] = '?' ;
    }
   
    lacunas[letras] = '\0';

    
    
    do{
        
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

        digitadas[a] = letradigi[0];
        a++;


        if (x==0){
            vidas--;
            printf("\n\n\n\nletra incorreta");
            printf("\nVidas totais: %d",vidas);
            
            printf("\nletras digitadas: ");
            for (int i = 0; i<a; i++) {
                printf("%c ", digitadas[i]);
            }
        
        }else{
            printf("\n\n\n\nLetra correta!!");
            printf("\nVidas totais: %d",vidas);
            
            printf("\nletras digitadas: ");
            for (int i = 0; i<a; i++) {
                printf("%c ", digitadas[i]);
            }
        }
        
        if (pontos==letras){
            printf("\nParabens, voce acertou a palavra!!!\n");
            printf("\nA palavra era %s", palavra);
            break;
        
        }else if (vidas==0){
            printf("\nInfelizmente, voce errou a palavra!!!\n");
            printf("\nA palavra era %s", palavra);
            break;   
        }
    
    
    }while(vidas>0||pontos!=letras);
    
    system("PAUSE");

}