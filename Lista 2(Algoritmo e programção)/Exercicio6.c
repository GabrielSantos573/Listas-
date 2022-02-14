//Escrever um algoritmo que determine se um número inteiro qualquer é PAR ou IMPAR.

#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
printf("Digite qualquer número: ");
scanf("%d", &numero);

if(numero&2 == 0)
  printf("Número par");
else
printf("Número impar");

}
