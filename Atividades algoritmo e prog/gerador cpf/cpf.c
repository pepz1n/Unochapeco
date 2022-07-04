
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


void CPFverificar(char IncricaoFederal[20]);
void VerificarCNPJ(char IncricaoFederal[18]);
void gerarCPF();


void CPFverificar(char *cpf)
{
    int i, j, digito1 = 0, digito2 = 0;
    if(strlen(cpf) != 11){
        printf("CPF invalido, digitos insuficientes!");
    }
        

    else if((strcmp(cpf,"00000000000") == 0) || (strcmp(cpf,"11111111111") == 0) || (strcmp(cpf,"22222222222") == 0) ||
            (strcmp(cpf,"33333333333") == 0) || (strcmp(cpf,"44444444444") == 0) || (strcmp(cpf,"55555555555") == 0) ||
            (strcmp(cpf,"66666666666") == 0) || (strcmp(cpf,"77777777777") == 0) || (strcmp(cpf,"88888888888") == 0) ||
            (strcmp(cpf,"99999999999") == 0)){
                printf("\nCPF invalido, digitos iguais nao sao aceitos"); ///se o CPF tiver todos os números iguais ele é inválido.
    }
       
       
    
    else{
        ///digito 1---------------------------------------------------
        for(i = 0, j = 10; i < strlen(cpf)-2; i++, j--) ///multiplica os números de 10 a 2 e soma os resultados dentro de digito1
            digito1 += (cpf[i]-48) * j;
        
        digito1 %= 11;//digito um recebe mod de 11 
       
        if(digito1 < 2) //caso mod de 11 seja menor que 2 (0 e 1 ) entao ele recebe 0
            digito1 = 0;
        else        // senao ele recebe o numero 11 menos o mod
            digito1 = 11 - digito1;
        
        if((cpf[9]-48) != digito1)
            printf("\nCPF invalido"); ///se o digito 1 não for o mesmo que o da validação CPF é inválido
        else{
        
            ///digito de validação 2
            for(i = 0, j = 11; i < strlen(cpf)-1; i++, j--) ///multiplica os números de 11 a 2 e soma os resultados dentro de digito2
                        digito2 += (cpf[i]-48) * j;
            
            digito2 %= 11;
            
            if(digito2 < 2){
                digito2 = 0;
            }
                
            else{
                digito2 = 11 - digito2;
            }
                
            if((cpf[10]-48) != digito2)
            printf("\nCPF invalido\n"); ///se o digito 2 não for o mesmo que o da validação CPF é inválido
        }
    }
    
    printf("\nCPF valido\n");


}




        

void VerificarCNPJ(char IncricaoFederal[18]) {
	
	
	
	
}


//função de gerar CPF
void gerarCPF(){
    //declaração de variaveis
    char cpf[15];
    int dig;

    
    srand(time(NULL));
    

    //laço para randomizar os 9 primeiros numeros do cpf com a função rand utilizando 
    //o time da biblioteca time.h
    for(int i = 0; i < 11; i++){
        cpf[i] = (rand() % 10) + '0';
    }
    cpf[3] = '.';
    cpf[7] = '.';
    cpf[11] = '-';
    
    //criação dos primeiro digito de validação conforme a regra explicada
    dig = ((((cpf[0] - '0') * 10) + ((cpf[1] - '0') * 9) + ((cpf[2] - '0') * 8) + ((cpf[4] - '0') * 7) + ((cpf[5] - '0') * 6) + ((cpf[6] - '0') * 5) + ((cpf[8] - '0') * 4) + ((cpf[9] - '0') * 3) + ((cpf[10] - '0') * 2)) % 11);
    if(dig == 0 || dig == 1){
        cpf[12] = '0';
    }
    else{
        cpf[12] = (11 - dig) + '0';
    }

    //criação do segundo digito de validação conforme a regra seguida
    dig = ((((cpf[0] - '0') * 11) + ((cpf[1] - '0') * 10) + ((cpf[2] - '0') * 9) + ((cpf[4] - '0') * 8) + ((cpf[5] - '0') * 7) + ((cpf[6] - '0') * 6) + ((cpf[8] - '0') * 5) + ((cpf[9] - '0') * 4) + ((cpf[10] - '0') * 3) + ((cpf[12] - '0') * 2)) % 11);
    if(dig == 0 || dig == 1){
        cpf[13] = '0';
    }
    else{
        cpf[13] = (11 - dig) + '0';
    }
    cpf[14] = '\0';

    //printf do cpf valido
    printf("\nO CPF gerado foi:\n");
    printf("%s \n", cpf);
    getch();
}



int main () {
    int caso;
    char variavelcpf[14];
    while (1) {
        
        printf("\nVerificador e gerador de cpf e cnpj");
        printf("\nEscolha uma das opcoes abaixo: ");
        printf("\n1- validador CPF");
        printf("\n2- validador CNPJ");
        printf("\n3- Gerador CNPJ");
        printf("\n4- Gerador CPF\n");

        scanf("%d", &caso);

        switch (caso) {

            case 1: 
                printf("\nValidador de CPF escolhido, digite o CPF a ser validado:\n ");
                fflush(stdin);
                gets(variavelcpf);
                CPFverificar(variavelcpf);
                break;
            
            case 2: 
                printf("Validador de CNPJ escolhido, digite o CNPJ a ser validado: ");
                fflush(stdin);
                gets(variavelcpf);
                VerificarCNPJ(variavelcpf); 
                break;
            case 4:
                printf("\nGerador de CPF selecionado, aperte um botao para continuar.\n");
                getch();
                gerarCPF();
                break;


        }
    }


}


