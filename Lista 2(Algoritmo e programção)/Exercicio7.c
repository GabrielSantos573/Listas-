//7. Ler dois valores num�ricos e apresentar a diferen�a do maior valor pelo menor.
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int valor1, valor2, diferenca;
	
	printf("Digite o valor1: ");
	scanf("%d", &valor1);
	printf("Digite o valor2: ");
	scanf("%d", &valor2);
	
	if(valor1 > valor2){
	diferenca = valor1 - valor2;
	printf("A diferen�a � = %d", diferenca);
	}
	
	else{
	diferenca = valor2 - valor1;
	 printf("A diferen�a � = %d", diferenca);
	 }
	
}
