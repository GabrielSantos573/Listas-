//3. Dado tr�s valores, verificar se eles podem constituir os lados de um tri�ngulo (tri�ngulo � uma
//figura geom�trica onde cada lado � menor do que a soma dos outros dois lados).

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
	  printf("V�lidos para a forma��o de 1 tri�ngulo.");
	else
	  printf("Inv�lidos para a forma��o de 1 tri�ngulo.");
	  
return 0;
	  
}
