//1. Construa um algoritmo que calcule o fatorial de um número usando a estrutura PARA...FAÇA,
//baseando-se na definição matemática (N! = 1x2x3x...x N-1 x N e 0! = 1 por definição)

#include<stdio.h>

int main(){
	int fat, n, i = 0;
	
	printf("Digite um número: ");
	scanf("%d", &n);
	
	if(n < 0)
		printf("O fatorial de %d é: 1", n);
	
	for(fat = 1; n > 1; n = n - 1)
		fat = fat * n;
	
	printf("O fatorial de %d é: %d", n, fat);
}
