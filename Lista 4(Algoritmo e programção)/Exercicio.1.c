//1 � Elabore um algoritmo que, a partir de um dia, m�s e ano fornecidos, valide se eles comp�em
//uma data v�lida. N�o deixe de considerar os meses com 30 ou 31 dias, e o tratamento de ano
//bissexto.

#include<stdio.h>//biblioteca para printf e scanf
#include<stdlib.h>//biblioteca para limpar a tela 
#include<math.h>//biblioteca para opera��es matem�ticas
#include<locale.h>//biblioteca para pra aceitar caracter especial:setlocale(LC_ALL, "Portuguese");
#include<string.h>//biblioteca para strlen e strcmp: http://linguagemc.com.br/a-biblioteca-string-h/
#include<ctype.h>//biblioteca para o uso do toupper e tolower: http://linguagemc.com.br/ctype-h-toupper-tolower-isalpha-isdigit-em-c/

int main(){
	
	int dia, mes, ano; 
	
	do{
		printf("Informe o dia:");
		scanf("%d", &dia);
		if(dia > 31 || dia < 1)
			printf("Dia inv�lido");
	}while(dia > 31 || dia < 1);
	
	do{
		printf("Informe o m�s:");
		scanf("%d", &mes);
		if(mes > 12 || mes < 1)
			printf("M�s inv�lido");
	}while(mes > 12 || mes < 1);
	
	do{
		printf("Informe o ano:");
		scanf("%d", &ano);
	}while(ano =! 2021);
	
}
