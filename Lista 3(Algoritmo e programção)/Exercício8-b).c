/*
8. Um mercador quer fazer um aumento em todos os seus produtos de 10%. Faça diferentes
algoritmos (um para cada estrutura de repetição) que leia a identificação e o preço de cada
produto e calcule e escreva a identificação e o novo preço após o aumento.
Considere as seguintes situações:
b) o mercador informa produto a produto e você deve perguntar se tem mais algum
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
		
		printf("Informe o preço: ");
		scanf("%f", &preco);
		
		novoPreco = preco + (preco * 0.1);
		
		printf("\nNovo preço do(a) %s é: %.2f\n", nomeProduto, novoPreco);
		
		fflush(stdin);
		
		printf("Há mais algum produto a ser calculado o aumento?(s/n): ");
		scanf("%c", &Maisproduto);
		
	}while(preco != -1);
}
