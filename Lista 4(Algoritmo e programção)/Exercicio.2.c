//2 – Elabore um algoritmo que escreva o signo do zodíaco correspondente ao dia e mês informado.//

#include<stdio.h>//biblioteca para printf e scanf
#include<stdlib.h> //biblioteca para limpar a tela 
#include<math.h>  //biblioteca para operações matemáticas
#include<locale.h>//biblioteca para pra aceitar caracter especial:setlocale(LC_ALL, "Portuguese");
#include<string.h>//biblioteca para strlen e strcmp: http://linguagemc.com.br/a-biblioteca-string-h/
#include<ctype.h> //biblioteca para o uso do toupper e tolower: http://linguagemc.com.br/ctype-h-toupper-tolower-isalpha-isdigit-em-c/

int main(){
	
	int dia, mes;
	
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
		
		if(dia >= 18 && mes == 12)
		 	printf("Seu signo é: Sagitário");
		else if(dia <= 18 && mes == 01)
			printf("Seu signo é: Sagitário");
		else if(dia >= 19 && mes == 01)
			printf("Seu signo é: Capricórnio");
		else if(dia <= 15 && mes == 02)
			printf("Seu signo é: Capricórnio");
		else if(dia >= 16 && mes == 02)
			printf("Seu signo é: Aquário");
		else if(dia <= 11 && mes == 03)
			printf("Seu signo é: Aquário");
		else if(dia >= 12 && mes == 03)
			printf("Seu signo é: Peixes");
		else if(dia <= 18 && mes == 04)
			printf("Seu signo é: Peixes");
			
//E vai fazendo repitindo isso.
		
		
		
		
		
		
		
		
		
		
}
