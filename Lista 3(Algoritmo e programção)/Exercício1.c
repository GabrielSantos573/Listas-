//1. Construa um algoritmo que calcule o fatorial de um n�mero usando a estrutura PARA...FA�A,
//baseando-se na defini��o matem�tica (N! = 1x2x3x...x N-1 x N e 0! = 1 por defini��o)

#include<stdio.h>

int main(){
	int fat, n, i = 0;
	
	printf("Digite um n�mero: ");
	scanf("%d", &n);
	
	if(n < 0)
		printf("O fatorial de %d �: 1", n);
	
	for(fat = 1; n > 1; n = n - 1)
		fat = fat * n;
	
	printf("O fatorial de %d �: %d", n, fat);
}
