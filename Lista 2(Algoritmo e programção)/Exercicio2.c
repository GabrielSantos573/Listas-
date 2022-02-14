//2. Efetuar a leitura de um número e apresentá-lo como o seu módulo (somente seu valor
//absoluto) elaborando os cálculos matemáticos para isso

#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
	 setlocale(LC_ALL, "Portuguese");
	int numero, modulo;
	
	printf("Digite qualquer número: ");
	scanf("%d", &numero);
	
	modulo = abs(numero);
	
	printf("Módulo: %d", modulo);
}
