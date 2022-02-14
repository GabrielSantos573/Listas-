// Construa um algoritmo que calcule a área de um círculo cujo raio é fornecido pelo
//usuário (use área= 3.14 x raio2)

#include<stdio.h>

int main(){
	
	float area, raio;
	
	printf("Digite o raio: ");
	scanf("%f", &raio);
	
	area = 3.14 * (raio * raio);
	 
	printf("area = %.2f", area);
	
	return 0;
	
}
