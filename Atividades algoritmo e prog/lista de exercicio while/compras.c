/*
4- Fazer um programa que leia as compras de uma pessoa, um item/qtdade por vez. Ao final, moste o total, solicite o pagamento e calcule o troco.

int qtdeCompras, cont
Real total, pagamento, troco, pagamento			
Escreva (“informe a quantidade de itens comprados: “);
Leia (qtdeCompras);
cont = 0;
total = 0;
Enquanto (cont<=qtdeCompras) Faça:
	Escreva (“valor do item: “);
	Leia (pagamento);
	total = total + pagamento;
	Cont = cont + 1;
FimEnquanto;
Escreva (“O total das compras foi: “, total);
Escreva (“informe o valor pago”);
leia (pagamento);
Se (pagamento < total) Entao:
	Escreva (“valor insuficiente”);
Senao:
	troco = pagamento - total;
	Escreva (“o troco é: “,troco);
FimSe
Fim
	FimAlgoritmo
	
*/
#include <stdio.h>

int main(){

int qtdeCompras, cont;
float total, pagamento, troco, valorPago;

printf ("\nInforme a quantidade de itens comprados:\n");
scanf ("%d", &qtdeCompras);
cont = 0;
total = 0;
while(cont <qtdeCompras){
    printf ("\ninforme o valor do item:\n ");
    scanf ("%f", &pagamento);
    total = total + pagamento;
    cont ++;
}

printf ("\nO total das compras foi: %.2f", total);
printf ("\nInforme o valor pago: ");
scanf ("%f", &valorPago);

if (valorPago<total){
    printf ("valor insuficiente!!");
}else{
    troco = valorPago - total;
    printf ("o troco e: %.2f\n",troco);
}
system("pause");
}

