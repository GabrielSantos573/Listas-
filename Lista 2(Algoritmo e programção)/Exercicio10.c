//10. Faça um algoritmo em português estruturado que leia três valores numéricos e encontre qual
//o menor deles, mostrando-o no final. Faça o chinesinho ao lado do seu algoritmo.

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int valor1, valor2, valor3; // valor1 = 3; valor2= 5; valor3= 1
	
	printf("Digite o valor 1:");
	scanf("%d", &valor1);
	printf("Digite o valor 2:");
	scanf("%d", &valor2);
	printf("Digite o valor 3:");
	scanf("%d", &valor3);
	
	if(valor1 < valor2 and valor1 < valor3)
	printf("O menor valor é: %d", valor1);
	else if(valor2 < valor1 and valor2 < valor3)
	     printf("O menor valor é: %d", valor2);                //o menor deles é o valor 3=1
	     else if(valor3 < valor2 and valor3 < valor1)
	     printf("O menor valor é: %d", valor3);

return 0;	 
	
}
