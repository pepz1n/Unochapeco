/*
Desafio Uma agenda perrmite armazenar dados como:
nome,
sobrenome,
numero,
email,
idade,
etc. (Vocês que decidem a estrutura de dados);

criar uma agenda com funções e structs, que permitam:
* cadastrar contatos
* listar contatos
* pesquisar contato
* excluir contato

*/
#include <stdio.h>


typedef struct contato{
    char nome[20];
    char sobrenome[20];
    int numero;
    char email[20];
};

void novoContato();
void listarCtt();
void pesquisarCtt();
void excluirCtt();




int main(){

    while(1){
    int switchCASE;
    printf("Escolha a opçao da agenda: ");
    printf("\n 1 - cadastrar novo contato; ");
    printf("\n 2 - listar os contatos;");
    printf("\n 3 - pesquisar contato;");
    printf("\n 4 - excluir contato");
    scanf("%d",&switchCASE);

    switch(switchCASE){

        case 1:
            novoContato();
            break;
        case 2:
            listarCtt();
            break;
        case 3:
            pesquisarCtt();
             break;
        case 4:
            excluirCtt();
            break;
        default:
            printf("Opcao errada tente novamente!!");





    }

    }




}
