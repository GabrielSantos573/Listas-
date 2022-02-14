/*
8. Modifique o algoritmo 4 (Sr. ou Sra.), feito anteriormente, para ler a altura e apresentar o
peso ideal da pessoa, utilizando as seguintes fórmulas
para homem: peso = (72.5 * altura) - 58
para mulher: peso = (62.1 * altura) - 44.7
*/
#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	
	float altura, pesoIdeal;
	char nome[20], sexo;
	
	printf("Informe seu nome: ");
	scanf("%s", &nome);
	
	fflush(stdin);
	
	printf("Informe seu sexo: ");
	scanf("%c", &sexo);
	
	printf("Digite a sua altura: ");
  scanf("%f", &altura);
	
	if(sexo == 'f'){
	 printf("Prazer Ilma. Sra %s\n", nome);
	 
	 pesoIdeal = ((altura * 62.1) - 44.7);
	 printf("Seu peso ideal seria: %.1f", pesoIdeal); 
	 }
	 else{
	 printf("Prazer Ilmo. Sr %s\n", nome);
	 
	 pesoIdeal = ((72.5 * altura) - 58);
	 printf("Seu peso ideal seria: %.1f", pesoIdeal);
	 }
	 
  	 
return 0;

}
