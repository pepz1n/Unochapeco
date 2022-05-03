#include <stdio.h>

int main(){
    int dias;
    float anos;
    printf("Entre com o numero de dias: ");
    scanf ("%d", &dias);

    if(dias<0){
        printf("numero de dias invalidos.");
    }else{
        anos = dias/365.25;
        printf("\n\n%d dias equivalem a %.2f anos.", dias, anos);
    }

}
