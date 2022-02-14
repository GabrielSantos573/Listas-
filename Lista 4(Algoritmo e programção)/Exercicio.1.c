//1 – Elabore um algoritmo que, a partir de um dia, mês e ano fornecidos, valide se eles compõem
//uma data válida. Não deixe de considerar os meses com 30 ou 31 dias, e o tratamento de ano
//bissexto.

#include<stdio.h>//biblioteca para printf e scanf
#include<stdlib.h>//biblioteca para limpar a tela 
#include<math.h>//biblioteca para operações matemáticas
#include<locale.h>//biblioteca para pra aceitar caracter especial:setlocale(LC_ALL, "Portuguese");
#include<string.h>//biblioteca para strlen e strcmp: http://linguagemc.com.br/a-biblioteca-string-h/
#include<ctype.h>//biblioteca para o uso do toupper e tolower: http://linguagemc.com.br/ctype-h-toupper-tolower-isalpha-isdigit-em-c/

int main(){
	
	int dia, mes, ano; 
	
	do{
		printf("Informe o dia:");
		scanf("%d", &dia);
		if(dia > 31 || dia < 1)
			printf("Dia inválido");
	}while(dia > 31 || dia < 1);
	
	do{
		printf("Informe o mês:");
		scanf("%d", &mes);
		if(mes > 12 || mes < 1)
			printf("Mês inválido");
	}while(mes > 12 || mes < 1);
	
	do{
		printf("Informe o ano:");
		scanf("%d", &ano);
	}while(ano =! 2021);
	
}
