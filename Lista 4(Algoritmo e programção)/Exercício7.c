/*
7. Elabore um algoritmo que apresenta as compras de frutas efetuadas por usu�rio (quantidade
de frutas para cada tipo), sendo elas identificadas por meio de um n�mero.
1 => ABACAXI
2 => MA�A
3 => PERA
Usando a instru��o faca...enquanto identifique quais as frutas desejadas por seu usu�rio,
lembrando que ele pode desejar somente um tipo de fruta ou mais que um.
Deve existir o cuidado na identifica��o correta das frutas, pois o feirante s� possui estes tr�s
tipos. Caso o usu�rio escolha uma fruta n�o existente deve ser notificado que a fruta n�o est�
dispon�vel e a solicita��o deve ser feita novamente sobre qual fruta ele deseja.
*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int abacaxi, maca, pera, fruta, qntAbacaxi, qntMaca, qntPera;
	
	do{
		
		printf("Frutas:\n 1- Abacaxi. \n 2- Ma��. \n 3- Pera.\n 4- Sair \n");
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
					default: printf("Op��o inv�lida");		
		}
		
	}while(fruta != 4);
	
	printf("\nQuantidade de abacaxi: %d", qntAbacaxi);
	printf("\nQuantidade de ma��: %d", qntMaca);
	printf("\nQuantidade de pera: %d", qntPera);
	
	
	return 0;
	
}
