/*
11. Alterar o exerc�cio do tri�ngulo (exerc�cio 9), de forma que o algoritmo apresente no caso de
tri�ngulo o seu tipo: equil�tero (todos os lados s�o iguais), is�sceles (dois lados iguais) ou um
outro tri�ngulo qualquer (escaleno). Apresente o algoritmo, fazendo o teste do algoritmo
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
	  printf("V�lidos para a forma��o de 1 tri�ngulo.\n");
	else 
	("Inv�lidos para a forma��o de 1 tri�ngulo.\n");
	
	
   if(lado1 == lado2 and lado1 == lado3)
	     printf("Tri�ngulo equil�tero");
    else if(lado1 == lado2 or lado1 == lado3 or lado2 == lado3)
	     printf("Tri�ngulo is�sceles");
    else 
    printf("Tri�ngulo escaleno");
	  
return 0;
	  
}
