//2. Fa�a um algoritmo que leia dois n�meros calcule o resultado da multiplica��o de um pelo
//outro sem utilizar a opera��o de multiplica��o (ou seja, utilizando apenas soma)

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
