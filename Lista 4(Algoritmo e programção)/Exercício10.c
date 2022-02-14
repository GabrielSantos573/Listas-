//10. Fazer um algoritmo que leia números inteiros até que a quantidade lida seja 100 ou até que
//seja lido um número negativo e mostrar a quantidade total de números lidos.

#include<stdio.h>
#include<locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, i = 0;
	
	do{
	i++;
		printf("Digite um número para ser lido: ");
		scanf("%d", &numero);
	}while(numero != -1 || i == 100);
	
	if(numero = -1)
		i--;
	
	printf("A quantidade total de números lidos foi: %d", i);

}
