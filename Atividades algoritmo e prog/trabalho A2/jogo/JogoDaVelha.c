#include <stdio.h>

// variaveis globais(todas as funções)
char tabela[3][3];
char digito;
int linha, coluna, ganhou = 0;
int jogadas = 0;

void jogo();
void validacaoX();
void validacaoO();

int main()
{
    int comecar;

    while (1)
    {
        printf("Jogo Da Velha\n");
        printf("1-Jogar\n");
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

void jogo()
{
    printf("\nOpcao jogar selecionada");
    printf("\n\n\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            tabela[i][j] = '?';
        }
    }

    printf("\n\n\n\n\n");

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
        printf("\nTurno do X, informe a casa (linha coluna, 0 ate 2): ");
        scanf("%d %d", &linha, &coluna);
        jogadas++;
        tabela[linha][coluna] = 'x';
        printf("\n\n\n\n\n");
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
        validacaoX();

        if (ganhou == 1)
            break;

        printf("\nTurno do O, informe a casa (linha coluna, 0 ate 2): ");
        scanf("%d %d", &linha, &coluna);
        jogadas++;
        tabela[linha][coluna] = 'O';
        printf("\n\n\n\n\n");
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
        validacaoX();
        if (ganhou == 1)
            break;
    }
}

void validacaoX()
{
    // Validacao da primeira coluna
    if (tabela[0][0] == 'x' && tabela[0][0] == tabela[2][0] && tabela[0][0] == tabela[1][0])
    {
        printf("\nO X ganhou\n\n");
        ganhou = 1;
    }
    // validacao da primeira linha
    else if (tabela[0][0] == 'x' && tabela[0][0] == tabela[0][1] && tabela[0][0] == tabela[0][2])
    {
        printf("\nO X ganhou\n\n");
        ganhou = 1;
    }
    // validacao da segunda coluna
    else if (tabela[0][1] == 'x' && tabela[0][1] == tabela[1][1] && tabela[0][1] == tabela[2][1])
    {
        printf("\nO X ganhou\n\n");
        ganhou = 1;
    }
    // validacao da segunda linha
    else if (tabela[1][0] == 'x' && tabela[1][0] == tabela[1][1] && tabela[1][0] == tabela[1][2])
    {
        printf("\nO X ganhou\n\n");
        ganhou = 1;
    }
    // validacao da terceira coluna
    else if (tabela[0][2] == 'x' && tabela[0][2] == tabela[1][2] && tabela[0][2] == tabela[2][2])
    {
        printf("\nO X ganhou\n\n");
        ganhou = 1;
    }
    // validacao da terceira linha
    else if (tabela[2][0] == 'x' && tabela[2][0] == tabela[2][1] && tabela[2][0] == tabela[2][2])
    {
        printf("\nO X ganhou\n\n");
        ganhou = 1;
    }
    // Validacao da diagonal principal
    else if (tabela[0][0] == 'x' && tabela[0][0] == tabela[1][1] && tabela[0][0] == tabela[2][2])
    {
        printf("\nO X ganhou\n\n");
        ganhou = 1;
    }
    // Validacao da diagonal oposta
    else if (tabela[0][2] == 'x' && tabela[0][2] == tabela[1][1] && tabela[0][0] == tabela[2][0])
    {
        printf("\nO X ganhou\n\n");
        ganhou = 1;
    }
    else if (jogadas == 9)
    {
        printf("\nDeu velha!\n\n");
        ganhou = 1;
    }
}

void validacaoO()
{
    // Validacao da primeira coluna
    if (tabela[0][0] == 'O' && tabela[0][0] == tabela[2][0] && tabela[0][0] == tabela[1][0])
    {
        printf("\nO O ganhou\n\n");
        ganhou = 1;
    }
    // validacao da primeira linha
    else if (tabela[0][0] == 'O' && tabela[0][0] == tabela[0][1] && tabela[0][0] == tabela[0][2])
    {
        printf("\nO O ganhou\n\n");
        ganhou = 1;
    }
    // validacao da segunda coluna
    else if (tabela[0][1] == 'O' && tabela[0][1] == tabela[1][1] && tabela[0][1] == tabela[2][1])
    {
        printf("\nO O ganhou\n\n");
        ganhou = 1;
    }
    // validacao da segunda linha
    else if (tabela[1][0] == 'O' && tabela[1][0] == tabela[1][1] && tabela[1][0] == tabela[1][2])
    {
        printf("\nO O ganhou\n\n");
        ganhou = 1;
    }
    // validacao da terceira coluna
    else if (tabela[0][2] == 'O' && tabela[0][2] == tabela[1][2] && tabela[0][2] == tabela[2][2])
    {
        printf("\nO O ganhou\n\n");
        ganhou = 1;
    }
    // validacao da terceira linha
    else if (tabela[2][0] == 'O' && tabela[2][0] == tabela[2][1] && tabela[2][0] == tabela[2][2])
    {
        printf("\nO O ganhou\n\n");
        ganhou = 1;
    }
    // Validacao da diagonal principal
    else if (tabela[0][0] == 'O' && tabela[0][0] == tabela[1][1] && tabela[0][0] == tabela[2][2])
    {
        printf("\nO O ganhou\n\n");
        ganhou = 1;
    }
    // Validacao da diagonal oposta
    else if (tabela[0][2] == 'O' && tabela[0][2] == tabela[1][1] && tabela[0][0] == tabela[2][0])
    {
        printf("\nO O ganhou\n\n");
        ganhou = 1;
    }
    else if (jogadas == 9)
    {
        printf("\nDeu velha!\n\n");
        ganhou = 1;
    }
}
