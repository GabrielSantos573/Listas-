/*
7. Elabore um algoritmo que apresenta as compras de frutas efetuadas por usuário (quantidade
de frutas para cada tipo), sendo elas identificadas por meio de um número.
1 => ABACAXI
2 => MAÇA
3 => PERA
Usando a instrução faca...enquanto identifique quais as frutas desejadas por seu usuário,
lembrando que ele pode desejar somente um tipo de fruta ou mais que um.
Deve existir o cuidado na identificação correta das frutas, pois o feirante só possui estes três
tipos. Caso o usuário escolha uma fruta não existente deve ser notificado que a fruta não está
disponível e a solicitação deve ser feita novamente sobre qual fruta ele deseja.
*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int abacaxi, maca, pera, fruta, qntAbacaxi, qntMaca, qntPera;
	
	do{
		
		printf("Frutas:\n 1- Abacaxi. \n 2- Maçã. \n 3- Pera.\n 4- Sair \n");
		scanf("%d", &fruta);
		
		switch(fruta){
			case 1: printf("A quantidade que vai querer:");
					scanf("%d", &qntAbacaxi);
					break;
					
			case 2:printf("A quantidade que vai querer:");
					scanf("%d", &qntMaca);
					break;
					
			case 3:printf("A quantidade que vai querer:");
					scanf("%d", &qntPera);
					break;
			
			case 4:printf("\nEncerrado\n");
					default: printf("Opção inválida");		
		}
		
	}while(fruta != 4);
	
	printf("\nQuantidade de abacaxi: %d", qntAbacaxi);
	printf("\nQuantidade de maçã: %d", qntMaca);
	printf("\nQuantidade de pera: %d", qntPera);
	
	
	return 0;
	
}
