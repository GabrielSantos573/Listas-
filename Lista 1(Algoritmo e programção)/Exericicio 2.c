// Construa um algoritmo que calcule a �rea de um c�rculo cujo raio � fornecido pelo
//usu�rio (use �rea= 3.14 x raio2)

#include<stdio.h>

int main(){
	
	float area, raio;
	
	printf("Digite o raio: ");
	scanf("%f", &raio);
	
	area = 3.14 * (raio * raio);
	 
	printf("area = %.2f", area);
	
	return 0;
	
}
