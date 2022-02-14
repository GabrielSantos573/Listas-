//16. Fazer um algoritmo que leia o nome e a altura de três pessoas, determine e apresente o nome
//e a altura da menor delas.

#include<stdio.h>
#include<math.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char pessoa1[20], pessoa2[20], pessoa3[20];
	float altura1, altura2, altura3;
	
	printf("Digite o seu nome:");
	scanf("%s", &pessoa1);
	printf("Digite a sua altura:");
	scanf("%f", &altura1);
	
	printf("\nDigite o seu nome:");
	scanf("%s", &pessoa2);
	printf("Digite a sua altura:");
	scanf("%f", &altura2);
	
	printf("\nDigite o seu nome:");
	scanf("%s", &pessoa3);
	printf("Digite a sua altura:");
	scanf("%f", &altura3);
	

	if(altura1 < altura2 && altura1 < altura3)
	printf("O(a) menor é: %s \n %.2f", pessoa1, altura1);
	else if(altura2 < altura1 && altura2 < altura3)
	printf("O(a) menor é: %s \n %.2f", pessoa2, altura2);
	else
	printf("O(a) menor é: %s \n Altura %.2f", pessoa3, altura3);

return 0;

}
