/*
9. Uma pesquisa sobre algumas caracter�sticas f�sicas da popula��o de uma determinada regi�o
coletou os seguintes dados, referentes a cada habitante:
a) sexo (masculino, feminino);
b) cor dos olhos (azuis, verdes, castanhos, pretos);
c) cor dos cabelos (loiros, castanhos, pretos);
d) idade em anos.
Para indicar fim dos habitantes pesquisados, o usu�rio fornecer� um habitante fict�cio com idade
igual a �1. Fazer um algoritmo que determine e escreva:
a) a maior idade dos habitantes pesquisados;
b) a porcentagem de indiv�duos do sexo feminino cuja idade est� entre 18 e 35 anos
inclusive e que tenham olhos verdes e cabelos loiros.
*/

#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char sexo,  corOlhos[10],corCabelo[10];
	int idade, maiorIdade = 0, sexoF = 0, maiorFem = 0, oVerdes = 0, cLoiros = 0;
	float porcentagem;
	
	do{
		printf("Informe a idade: ");
		scanf("%d", &idade);
		
		fflush(stdin);
	
		printf("Informe o sexo: ");
		scanf("%c", &sexo);
		
		printf("Informe a cor dos olhos: ");
		scanf("%s", &corOlhos);
		
		printf("Informe a cor do cabelo: ");
		scanf("%s", &corCabelo);
		
		if(sexo == 'f')
		sexoF++;
		
		if(idade >= 18 && idade <= 35 && sexo == 'f' && strcmp(corCabelo, "loiro")==0 && strcmp(corOlhos, "verdes")==0)
		maiorFem++;
		
		if(maiorIdade == 0)
			maiorIdade = idade;
		else if(idade > maiorIdade) 
				maiorIdade = idade;
						
	}while(idade != -1);
	
	printf("A maior idade �: %d", maiorIdade);
	
	porcentagem = ((maiorFem * 100)/sexoF);
	
	printf("\nA  porcentagem de indiv�duos do sexo feminino cuja idade est� entre 18 e 35 anos e que tenham olhos verdes e cabelos loiros �: %.1f %", porcentagem);
	
}



