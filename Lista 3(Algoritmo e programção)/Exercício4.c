//Sendo H = 1/1+1/2+1/3+ ... +1/N. Prepare um algoritmo para calcular H sendo N fornecido
//pelo usu�rio.

#include<stdio.h>

int main(){
	
	float N, H=0;
	
	
	printf("Digite o valor de N:");
	scanf("%f", &N);
	
	for(int i=0; i <= N; i++){
		H += (1/N);
	}
		
	printf("Valor de H: %.2f", H); 
}
