#include <stdio.h>

// variaveis globais(todas as funções)
char tabela[3][3];
char digito;
int linha, coluna, ganhou = 0;
int jogadas = 0;
int JogarNovamente=0;
//Melhoria : adição de flags para a pontuação do vencedor
int ganhouX = 0;
int ganhouO= 0;
//declarar funçoes
void jogo();
void validacaoX();
void validacaoO();

int main()
{
    int comecar;

    while (1)
    {   
        //switch case para iniciar ou sair do jogo 
    
        if(JogarNovamente!=1){
            printf("Jogo Da Velha\n");
            printf("1-Jogar\n");
            printf("Jogo Da Velha\n");
        }else{
            printf("Vitorias X = %d ", ganhouX);
            printf("\nVitorias O = %d ", ganhouO);
            printf("\n1-Jogar Novamente\n");
        }
        printf("2-Sair\n");
        scanf("%d", &comecar);

        switch (comecar)
        {
        case 1:
            ganhou = 0;
            jogadas= 0;
            jogo();
            break;

        case 2:
            return 0;
            break;
        }
    }
}
//funçao para o jogo principal
void jogo()
{
    system("cls");
    printf("\nOpcao jogar selecionada");
    printf("\n\n\n");
    //para o inicio todos os digitos recebem ?
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            tabela[i][j] = '?';
        }
    }

    printf("\n\n\n\n\n");
    //printa a tabela inicial na tela
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %c", tabela[i][j]);
            if (j < 2)
            {
                printf(" |");
            }
        }
        printf("\n");
    }

    while (1)
    {
        //Turno do X
        printf("\nTurno do X, informe a casa (linha coluna, 0 ate 2): ");
        scanf("%d %d", &linha, &coluna);
        jogadas++;
        tabela[linha][coluna] = 'x';
        printf("\n\n\n\n\n");
        //imprime a tabela atualizada
        //Melhoria: limpa a sequencia de cima para uma melhor experiencia
        system("cls");
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf(" %c", tabela[i][j]);
                if (j < 2)
                {
                    printf(" |");
                }
            }
            printf("\n");
        }
        //chama a funçao validacaoX para conferir o resultado
        validacaoX();
        //se for correto a variavel recebe 1 e o jogo acaba
        if (ganhou == 1){
            JogarNovamente=1;
            break; 
        }
        //turno do O
        
        printf("\nTurno do O, informe a casa (linha coluna, 0 ate 2): ");
        scanf("%d %d", &linha, &coluna);
        jogadas++;
        tabela[linha][coluna] = 'O';
        printf("\n\n\n\n\n");
        //Printa a tabela na tela
        //Melhoria: limpa a sequencia de cima para uma melhor experiencia
        system("cls");
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf(" %c", tabela[i][j]);
                if (j < 2)
                {
                    printf(" |");
                }
            }
            printf("\n");
        }
        //Chama a funçao validacaoO para validar o reesultado
        validacaoO();
        //se for correto a variavel recebe 1 e o jogo acaba
        if (ganhou == 1){
            JogarNovamente=1;
            break; 
        }
    }
}

//validaçao X
void validacaoX()
{
    // Validacao da primeira coluna
    if (tabela[0][0] == 'x' && tabela[0][0] == tabela[2][0] && tabela[0][0] == tabela[1][0])
    {
        printf("\nO X ganhou\n\n");
        ganhou = 1;
        ganhouX++;

    }
    // validacao da primeira linha
    else if (tabela[0][0] == 'x' && tabela[0][0] == tabela[0][1] && tabela[0][0] == tabela[0][2])
    {
        printf("\nO X ganhou\n\n");
        ganhou = 1;
        ganhouX++;
    }
    // validacao da segunda coluna
    else if (tabela[0][1] == 'x' && tabela[0][1] == tabela[1][1] && tabela[0][1] == tabela[2][1])
    {
        printf("\nO X ganhou\n\n");
        ganhou = 1;
        ganhouX++;
    }
    // validacao da segunda linha
    else if (tabela[1][0] == 'x' && tabela[1][0] == tabela[1][1] && tabela[1][0] == tabela[1][2])
    {
        printf("\nO X ganhou\n\n");
        ganhou = 1;
        ganhouX++;
    }
    // validacao da terceira coluna
    else if (tabela[0][2] == 'x' && tabela[0][2] == tabela[1][2] && tabela[0][2] == tabela[2][2])
    {
        printf("\nO X ganhou\n\n");
        ganhou = 1;
        ganhouX++;
    }
    // validacao da terceira linha
    else if (tabela[2][0] == 'x' && tabela[2][0] == tabela[2][1] && tabela[2][0] == tabela[2][2])
    {
        printf("\nO X ganhou\n\n");
        ganhou = 1;
        ganhouX++;
    }
    // Validacao da diagonal principal
    else if (tabela[0][0] == 'x' && tabela[0][0] == tabela[1][1] && tabela[0][0] == tabela[2][2])
    {
        printf("\nO X ganhou\n\n");
        ganhou = 1;
        ganhouX++;
    }
    // Validacao da diagonal oposta
    else if (tabela[0][2] == 'x' && tabela[0][2] == tabela[1][1] && tabela[0][0] == tabela[2][0])
    {
        printf("\nO X ganhou\n\n");
        ganhou = 1;
        ganhouX++;
    }
    //Caso todas as casas sejam completadas e não tenha um vencedor a velha é acionada
    else if (jogadas == 9)
    {
        printf("\nDeu velha!\n\n");
        ganhou = 1;
        ganhouX++;
    }
}

//função para validaçao de O
void validacaoO()
{
    // Validacao da primeira coluna
    if (tabela[0][0] == 'O' && tabela[0][0] == tabela[2][0] && tabela[0][0] == tabela[1][0])
    {
        printf("\nO O ganhou\n\n");
        ganhou = 1;
        ganhouO++;
    }
    // validacao da primeira linha
    else if (tabela[0][0] == 'O' && tabela[0][0] == tabela[0][1] && tabela[0][0] == tabela[0][2])
    {
        printf("\nO O ganhou\n\n");
        ganhou = 1;
        ganhouO++;
    }
    // validacao da segunda coluna
    else if (tabela[0][1] == 'O' && tabela[0][1] == tabela[1][1] && tabela[0][1] == tabela[2][1])
    {
        printf("\nO O ganhou\n\n");
        ganhou = 1;
        ganhouO++;
    }
    // validacao da segunda linha
    else if (tabela[1][0] == 'O' && tabela[1][0] == tabela[1][1] && tabela[1][0] == tabela[1][2])
    {
        printf("\nO O ganhou\n\n");
        ganhou = 1;
        ganhouO++;
    }
    // validacao da terceira coluna
    else if (tabela[0][2] == 'O' && tabela[0][2] == tabela[1][2] && tabela[0][2] == tabela[2][2])
    {
        printf("\nO O ganhou\n\n");
        ganhou = 1;
        ganhouO++;
    }
    // validacao da terceira linha
    else if (tabela[2][0] == 'O' && tabela[2][0] == tabela[2][1] && tabela[2][0] == tabela[2][2])
    {
        printf("\nO O ganhou\n\n");
        ganhou = 1;
        ganhouO++;
    }
    // Validacao da diagonal principal
    else if (tabela[0][0] == 'O' && tabela[0][0] == tabela[1][1] && tabela[0][0] == tabela[2][2])
    {
        printf("\nO O ganhou\n\n");
        ganhou = 1;
        ganhouO++;
    }
    // Validacao da diagonal oposta
    else if (tabela[0][2] == 'O' && tabela[0][2] == tabela[1][1] && tabela[0][0] == tabela[2][0])
    {
        printf("\nO O ganhou\n\n");
        ganhou = 1;
        ganhouO++;
    }
    //Caso todas as casas sejam completadas e não tenha um vencedor a velha é acionada
    else if (jogadas == 9)
    {
        printf("\nDeu velha!\n\n");
        ganhou = 1;
    }
}
