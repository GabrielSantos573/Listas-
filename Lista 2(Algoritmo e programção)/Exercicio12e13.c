/*
12. Fa�a um algoritmo em portugu�s estruturado que leia o n�mero de DDD e informe a qual
cidade pertence, considerando s� os seguintes valores:
61 - Bras�lia
71 - Salvador
11 - S�o Paulo
21 - Rio de Janeiro
32 - Juiz de Fora
19 - Campinas
27 - Vit�ria
31 - Belo Horizonte
qualquer outro - uma cidade no Brasil sem identifica��o
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
	    	printf("Esse DDD pertence a bras�lia");
			break;
		case 71: 
			printf("Esse DDD pertence a Salvador");
			break;
		case 11: 
			printf("Esse DDD pertence a S�o paulo");
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
			printf("Esse DDD pertence a Vit�ria");
			break;
		case 31: 
			printf("Esse DDD pertence a Belo Horizonte");
			break;
			
		  default: 
		  	printf("Sem indentifica��o");
	}
}
