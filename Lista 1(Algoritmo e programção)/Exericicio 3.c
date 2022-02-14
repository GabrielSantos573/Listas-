//Construa um algoritmo que calcule a média aritmética de 3 números quaisquer
//fornecidos pelo usuario

#include<stdio.h>

int main(){
	
	float nota1, nota2, nota3, MEDIA;
	
	printf("Digite a nota 1: ");
	scanf("%f", &nota1);
	printf("\nDigite a nota 2: ");
	scanf("%f", &nota2);
	printf("\nDigite a nota 3: ");
	scanf("%f", &nota3);
	
	MEDIA = (nota1 + nota2 + nota3)/3;
	
	printf("Media: %.2f", MEDIA);
	
	return 0;
	
}
