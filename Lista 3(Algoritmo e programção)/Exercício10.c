//10. Fazer um algoritmo que leia n�meros inteiros at� que a quantidade lida seja 100 ou at� que
//seja lido um n�mero negativo e mostrar a quantidade total de n�meros lidos.

#include<stdio.h>
#include<locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, i = 0;
	
	do{
	i++;
		printf("Digite um n�mero para ser lido: ");
		scanf("%d", &numero);
	}while(numero != -1 || i == 100);
	
	if(numero = -1)
		i--;
	
	printf("A quantidade total de n�meros lidos foi: %d", i);

}
