//14. Fazer um algoritmo que leia três valores, determine e imprima o maior deles.

#include<stdio.h>
#include<math.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
float valor1, valor2, valor3;

printf("Digite o primeiro valor: ");
scanf("%f", &valor1);
printf("Digite o segundo valor: ");
scanf("%f", &valor2);
printf("Digite o terceiro valor: ");
scanf("%f", &valor3);

if (valor1 > valor2 && valor1 > valor3)
	printf("O maior é: %.1f", valor1);
else if(valor2 > valor1 && valor2 > valor3)
	printf("O maior é: %.1f", valor2);
	else
	printf("O maior é: %.1f", valor3);
	
return 0;
}
