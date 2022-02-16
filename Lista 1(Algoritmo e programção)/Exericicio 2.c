// Construa um algoritmo que calcule a área de um círculo cujo raio é fornecido pelo
//usuário (use área= 3.14 x raio2)

#include<stdio.h>
#include<math.h>
#define PI 3.14159//constante (n pode ser alterada durante o algoritmo)

int main(){
	
	double area, raio;
	
	printf("Digite o raio: ");
	scanf("%lf", &raio);
	
	area = PI * (raio * raio);
	ou // area = PI * pow(raio, 2);
	 
	printf("area = %.2lf", area);
	
	return 0;
	
}
