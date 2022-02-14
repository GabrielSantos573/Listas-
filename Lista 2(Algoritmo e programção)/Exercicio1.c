/*
1. Construa um algoritmo que a partir da leitura da velocidade e placa do carro, avise ao
motorista somente se ele será multado, quando estiver trafegando no Eixo Rodoviário (limite
de 80 km/h).
*/

#include<stdio.h>
int main(){
	int velocidade;
	char placa[10];
	
	printf("Velocidade detectada: ");
	scanf("%d", &velocidade);
	
	printf("Placa do carro: ");
	scanf("%s", &placa);
	
	if(velocidade > 80)
	  printf("MULTADO!");
	  else 
	  printf("Dentro do limite");
	  
	  return 0;
}

