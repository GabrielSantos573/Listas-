//Escrever um algoritmo que determine se um n�mero inteiro qualquer � PAR ou IMPAR.

#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
printf("Digite qualquer n�mero: ");
scanf("%d", &numero);

if(numero&2 == 0)
  printf("N�mero par");
else
printf("N�mero impar");

}
