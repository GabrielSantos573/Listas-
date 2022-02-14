//Leia 2 valores A e B, que correspondem a 2 notas de um aluno. A seguir, calcule a
//media do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma
//dos pesos portanto eh 11). Assuma que cada nota pode ir de 0 ate 10.0

#include<stdio.h>

int main(){
	
	float A, B, media;
	
	printf("Informe a nota 1: ");
	scanf("%f", &A);
	printf("Informe a nota 2: ");
	scanf("%f", &B);
	
	media = ((A * 3.5) + (B * 7.5))/10;
	
	printf("Media: %.2f",media);
	
	return 0;
}
