#include <stdio.h>

int main(){
    int dias;
    float anos;
    printf ("entre com o numero de dias: ");
    scanf ("%d",&dias);
    anos = dias/365.25;
    printf("\n\n% dias equivalem a %2.fdia",dias, anos);

}
