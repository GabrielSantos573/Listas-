//5. Elabore um algoritmo para calcular N! (fatorial de N) sendo que o valor inteiro de N é
//fornecido pelo usuário. Sabe-se que: N! = 1x2x...x N-1 x N e 0! = 1. Use o enquanto...faça.

#include<stdio.h>

int main(){
	
	int fat = 1, n;
	
	printf("Insira o valor de N: ");
	scanf("%d", &n);
	 
	if(n == 0)
		printf("O fatorial de 0 é: 1"); 
	else{
		
		do{	
		
		fat = fat * n;
		n = n - 1;
			
		}while(n > 1);
		printf("O fatorial do numero inserido eh: %d", fat);
	}
}
