/*
8. Um mercador quer fazer um aumento em todos os seus produtos de 10%. Fa�a diferentes
algoritmos (um para cada estrutura de repeti��o) que leia a identifica��o e o pre�o de cada
produto e calcule e escreva a identifica��o e o novo pre�o ap�s o aumento.
Considere as seguintes situa��es:
a) o mercador informa o n�mero de produtos que possui antes de entrar com o pre�o
dos produtos
*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nomeProduto[25];
	int qntProdutos;
	float preco, novoPreco;
	
		printf("Quantidade de produtos: ");
		scanf("%d", &qntProdutos);
		
	for(int i = 0; i < qntProdutos; i++){
		printf("\nInforme o nome do produto: ");
		scanf("%s", &nomeProduto);
		
		printf("Informe o pre�o: ");
		scanf("%f", &preco);
		
		novoPreco = preco + (preco * 0.1);
		
		printf("\nNovo pre�o do(a) %s �: %.2f\n", nomeProduto, novoPreco);
	}
	
	return 0;

}
