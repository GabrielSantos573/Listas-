/*
12. Faça um algoritmo em português estruturado que leia o número de DDD e informe a qual
cidade pertence, considerando só os seguintes valores:
61 - Brasília
71 - Salvador
11 - São Paulo
21 - Rio de Janeiro
32 - Juiz de Fora
19 - Campinas
27 - Vitória
31 - Belo Horizonte
qualquer outro - uma cidade no Brasil sem identificação
*/

#include<stdio.h>
#include<math.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int DDD;
	
	printf("Informe o DDD: ");
	scanf("%d", &DDD);
	
	switch(DDD){
		case 61:
	    	printf("Esse DDD pertence a brasília");
			break;
		case 71: 
			printf("Esse DDD pertence a Salvador");
			break;
		case 11: 
			printf("Esse DDD pertence a São paulo");
			break;
		case 21:
			 printf("Esse DDD pertence a Rio de Janeiro");
			 break;
		case 32:
			 printf("Esse DDD pertence a Juizo de Fora");
			 break;
		case 19: 
			printf("Esse DDD pertence a Campinas");
			break;
		case 27: 
			printf("Esse DDD pertence a Vitória");
			break;
		case 31: 
			printf("Esse DDD pertence a Belo Horizonte");
			break;
			
		  default: 
		  	printf("Sem indentificação");
	}
}
