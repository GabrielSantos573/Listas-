//3. Dado três valores, verificar se eles podem constituir os lados de um triângulo (triângulo é uma
//figura geométrica onde cada lado é menor do que a soma dos outros dois lados).

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
	  printf("Válidos para a formação de 1 triângulo.");
	else
	  printf("Inválidos para a formação de 1 triângulo.");
	  
return 0;
	  
}
