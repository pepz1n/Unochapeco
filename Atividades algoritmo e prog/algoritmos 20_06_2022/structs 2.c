#include <stdio.h>
#define TAM 3

typedef struct car{
    char marca[12];
    char model[20];
    int ano;
    double valor;
};

int main(){
    struct car vetCars[TAM];
    for(int i = 0; i < TAM; i++){
        printf("Digite os dados do carro (marca, modelo, ano e valor): ");
        scanf("%s $s", &vetCars[i].marca, &vetCars[i].model);
        scanf("%d", &vetCars[i].ano);
        scanf("%lf", &vetCars[i].valor);
    }


    printf("\nSua lista de carros: \n");
    printf("MARCA/MODELO \t ANO \t VALOR");
    for(int i = 0; i <TAM; i++){
        printf("\n-------------------------------");
        printf("\n%s %s \t %d \t %.2lf", vetCars[i].marca, vetCars[i].model, vetCars[i].ano, vetCars[i].valor);
    }
}
