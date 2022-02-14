/*
11. Alterar o exercício do triângulo (exercício 9), de forma que o algoritmo apresente no caso de
triângulo o seu tipo: equilátero (todos os lados são iguais), isósceles (dois lados iguais) ou um
outro triângulo qualquer (escaleno). Apresente o algoritmo, fazendo o teste do algoritmo
(chinesinho) ao lado.
*/

#include<stdio.h>
#include<math.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float lado1, lado2, lado3;
	printf("Digite o primeiro valor: ");
	scanf("%f", &lado1);
	printf("Digite o segundo valor: ");
	scanf("%f", &lado2);
	printf("Digite o terceiro valor: ");
	scanf("%f", &lado3);
	
	if(lado1 + lado2 > lado3 and lado1 + lado3 > lado2 and lado2 + lado3 > lado1)
	  printf("Válidos para a formação de 1 triângulo.\n");
	else 
	("Inválidos para a formação de 1 triângulo.\n");
	
	
   if(lado1 == lado2 and lado1 == lado3)
	     printf("Triângulo equilátero");
    else if(lado1 == lado2 or lado1 == lado3 or lado2 == lado3)
	     printf("Triângulo isósceles");
    else 
    printf("Triângulo escaleno");
	  
return 0;
	  
}
