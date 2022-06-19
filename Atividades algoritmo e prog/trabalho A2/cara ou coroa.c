/*
Entrada
A entrada contém vários casos de teste. A primeira linha de um caso de teste contém um único inteiro N indicando o número de vezes jogadas 
(1 ≤ N ≤ 10000). A linha seguinte contém N inteiros Ri, separados por um espaço, descrevendo a lista de resultados. Se Ri = 0 então Maria
 venceu o iésimo jogo, se Ri = 1 então João venceu o iésimo jogo (1 ≤ i ≤ N). O fim da entrada é indicado por N = 0.

Saída
Para cada caso de teste na entrada, seu programa deverá escrever uma linha contendo a sentença "Mary won X times and John won Y times"
 ("Maria venceu X vezes e Joao venceu Y vezes"), onde 0 ≤ X e 0 ≤ Y.

*/
#include <stdio.h>

int main(){
	int QTDnumeros, val, Mar = 0 , Joa = 0;
	scanf("%d", &QTDnumeros);
	do{
		Mar = 0;
		Joa = 0;
		for(int c = 0; c < QTDnumeros; c++){
			scanf("%d", &val);
			if(val==0){
				Mar++;
			}else
				if (val == 1){
				Joa++;
                }
		}
	printf("Mary won %d times and John won %d times\n", Mar, Joa);
	scanf("%d", &QTDnumeros);
	} while (QTDnumeros != 0);
	return 0;
}