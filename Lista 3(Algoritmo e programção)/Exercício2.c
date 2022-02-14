//2. Faça um algoritmo que leia dois números calcule o resultado da multiplicação de um pelo
//outro sem utilizar a operação de multiplicação (ou seja, utilizando apenas soma)

#include<stdio.h>

int main(){
	int N1, N2, resultado = 0, i;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &N1);
	
	fflush(stdin);
	
	printf("Digite mais um numero: ");
	scanf("%d", &N2);
	
	for(i = 0; i < N2; i++){
		resultado = resultado + N1;
	}
	
	printf("Resultado: %d", resultado);
	
	
	
}
