#include <stdio.h>
#include <string.h>


typedef struct Carro{
    char nome[20];
    int ano;
    char dono[30]
};



int main(){
    struct Carro c1, c2, c3;
    printf("Digite o nome do carro: ");
    fflush(stdin);
    gets(c1.nome);
    printf("Digite o nome do dono: ");
    fflush(stdin);
    gets(c1.dono);
    printf("digite o ano do carro: ");
    scanf("%d",&c1.ano);
    printf("\n\nO carro e um %s %d e seu dono e : %s ",c1.nome,c1.ano, c1.dono);
    getch();

    system("cls");
    printf("Digite o nome do segundo carro: ");
    fflush(stdin);
    gets(c2.nome);
    printf("Digite o nome do dono: ");
    fflush(stdin);
    gets(c2.dono);
    printf("digite o ano do segundo carro: ");
    scanf("%d",&c2.ano);
    printf("\n\nO carro e um %s %d e seu dono e: %s",c2.nome,c2.ano, c2.dono);
    getch();

    system("cls");
    printf("Digite o nome do terceiro  carro: ");
    fflush(stdin);
    gets(c3.nome);
    printf("Digite o nome do dono: ");
    fflush(stdin);
    gets(c3.dono);
    printf("digite o ano do terceiro carro: %s ");
    scanf("%d",&c3.ano);
    printf("\n\nO terceiro carro e um %s %d e seu dono e: ",c3.nome,c3.ano, c3.ano);

}
