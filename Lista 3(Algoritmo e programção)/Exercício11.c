/*
11. Voc� foi escolhido para fazer um algoritmo para informar o vencedor de um concurso de
piadas. Estar�o concorrendo ao pr�mio 3 finalistas, cujos nomes ser�o fornecidos. A
quantidade de ju�zes ser� definida no dia da apura��o e para cada juiz o algoritmo solicitar� a
nota para cada candidato. A nota poder� variar de 0 (zero) a 100(cem). O algoritmo dever�
apresentar o nome e o total de pontos de cada concorrente e o nome e total de pontos do
vencedor ap�s o voto de todos os ju�zes.
*/

#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nomeFinalista[2][25];
	int nota[2], soma[2], i;
	
	for(i = 0; i < 3; i++){
		printf("\nNome do finalista: ");
		scanf("%s", &nomeFinalista[i]);
		
		printf("Nota do primeiro Juiz: ");
		scanf("%d", &nota[0]);
		
		printf("Nota do segundo Juiz: ");
		scanf("%d", &nota[1]);
		
		printf("Nota do terceiro Juiz: ");
		scanf("%d", &nota[2]);
		
		soma[i] = nota[0] + nota[1] + nota[2];
		
		printf("A soma das notas �: %d\n", soma[i]);		
	}
	
	if(soma[0] > soma[1] && soma[0] > soma[2]){
		printf("O Vencedor � %s com a nota %d",nomeFinalista[0], soma[0]);
	}else if(soma[1] > soma[0] && soma[1] > soma[2]){
		printf("O Vencedor � %s com a nota %d",nomeFinalista[1], soma[1]);
	}else{
		printf("O Vencedor � %s com a nota %d",nomeFinalista[2], soma[2]);
	}
	return 0;
	
}
