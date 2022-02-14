/*
8. Um mercador quer fazer um aumento em todos os seus produtos de 10%. Faça diferentes
algoritmos (um para cada estrutura de repetição) que leia a identificação e o preço de cada
produto e calcule e escreva a identificação e o novo preço após o aumento.
Considere as seguintes situações:
a) o mercador informa o número de produtos que possui antes de entrar com o preço
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
		
		printf("Informe o preço: ");
		scanf("%f", &preco);
		
		novoPreco = preco + (preco * 0.1);
		
		printf("\nNovo preço do(a) %s é: %.2f\n", nomeProduto, novoPreco);
	}
	
	return 0;

}
