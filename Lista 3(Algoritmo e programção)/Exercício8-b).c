/*
8. Um mercador quer fazer um aumento em todos os seus produtos de 10%. Fa�a diferentes
algoritmos (um para cada estrutura de repeti��o) que leia a identifica��o e o pre�o de cada
produto e calcule e escreva a identifica��o e o novo pre�o ap�s o aumento.
Considere as seguintes situa��es:
b) o mercador informa produto a produto e voc� deve perguntar se tem mais algum
produto a ser calculado o aumento
*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nomeProduto[25], Maisproduto;
	float preco, novoPreco;
	
	do{
		printf("\nInforme o nome do produto: ");
		scanf("%s", &nomeProduto);
		
		printf("Informe o pre�o: ");
		scanf("%f", &preco);
		
		novoPreco = preco + (preco * 0.1);
		
		printf("\nNovo pre�o do(a) %s �: %.2f\n", nomeProduto, novoPreco);
		
		fflush(stdin);
		
		printf("H� mais algum produto a ser calculado o aumento?(s/n): ");
		scanf("%c", &Maisproduto);
		
	}while(preco != -1);
}
