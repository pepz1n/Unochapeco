
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


void CPFverificar(char IncricaoFederal[20]);
void VerificarCNPJ(char IncricaoFederal[18]);
void gerarCPF();


void CPFverificar(char IncricaoFederal[12])
{//Função do Algoritmo 

    int soma1, soma2, parte1, parte2, parte3;
    int parte5, parte6, parte7; 
    int dig1, dig2, erro=0;

    char temp;
    int CPF[11];
    // int j = 0;

  for (int i=0; i<11; i++)
  { 
    // if(IncricaoFederal[i] !='.' && IncricaoFederal[i] !='/' && IncricaoFederal[i] !='-') //Se na posição i do laço de repetição for diferente ou igual a . , / , - o laço ignora 
    
    //  temp = IncricaoFederal[i];
     CPF[i] = atoi(IncricaoFederal[i]);  
	//  temp = ' ';   
    //  j++; 

    
  }




//Calculo do Primeiro Dígito

     soma1 =((CPF[0] * 10) +
             (CPF[1] * 9) +
             (CPF[2] * 8) +
             (CPF[3] * 7) +
             (CPF[4] * 6) +
             (CPF[5] * 5) +
             (CPF[6] * 4) +
             (CPF[7] * 3) +
             (CPF[8] * 2));
             
     parte1 = (soma1 / 11);
     parte2 = (parte1 * 11);
     parte3 = (soma1 - parte2);
     dig1   = ( 11 - parte3);
     if (dig1 > 9) dig1 = 0;
    //validação do primeiro digito de verificação 
     if (dig1 == CPF[9]){
        
        //calculo do segundo digito de verificação
        soma2 =((CPF[0]*11) +
             (CPF[1] * 10) +
             (CPF[2] * 9) +
             (CPF[3] * 8) +
             (CPF[4] * 7) +
             (CPF[5] * 6) +
             (CPF[6] * 5) +
             (CPF[7] * 4) +
             (CPF[8] * 3) +
             (dig1 * 2));
             
        parte5 = (soma2 / 11);
        parte6 = (parte5 * 11);
        parte7 = (soma2 - parte6);
        dig2   = (11 - parte7);
        if (dig2 > 9) dig2 = 0;
        
        //validação do segundo digito do cpf
        if(dig2 == CPF[10] ){
           
            //Invalida CPF com todos os dígitos iguais. 
            if(CPF[0] == CPF[1] && CPF[1]==CPF[2] && CPF[2]==CPF[3] && CPF[3]==CPF[4] && CPF[4]==CPF[5] 
            && CPF[5] == CPF[6] && CPF[6]==CPF[7] && CPF[7]==CPF[8] && CPF[8]==CPF[9]){
               
               erro++;      
            }
               
                      
            
      
        }else{
            erro++;
        }


    }else{
        erro++;
    }

// Informa CPF Valido, e estado de Emissao.

    if (erro==0) 
    {
        printf("\n\nCPF Valido\n\n");
    }
    else
    {
        printf ("\n\nCPF Invalido");
    }

return;


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
                printf("\nValidador de CPF escolhido, digite o CPF a ser validado: ");
                fflush(stdin);
                gets(variavelcpf);
                printf("\n%s\n", variavelcpf);
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


