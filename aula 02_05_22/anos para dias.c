#include <stdio.h>

int main(){
    float dias;
    int anos;
    printf ("informe a quantidade de anos: ");
    scanf("%d", &anos);
    if(anos>0){
        dias = anos*365.25;
        printf ("\n\n%d anos equivalem a %.2f dias.\n", anos, dias);
    }else{
        printf("\nvalor invalido.");
    }
}
