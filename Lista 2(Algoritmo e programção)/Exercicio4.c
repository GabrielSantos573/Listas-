//4. Desenvolver um algoritmo que leia o nome e o sexo de uma pessoa e apresente como saída
//uma das seguintes mensagens: “Ilmo. Sr.”, para o sexo masculino ou “Ilma. Sra.” para o sexo
//feminino, acrescentando o nome em seguida. 

#include<stdio.h>
int main(){
	
	char nome[20], sexo;
	
	fflush(stdin);
	printf("Informe seu nome: ");
	scanf("%s", &nome);
	
	fflush(stdin);
	
	printf("Informe seu sexo: ");
	scanf("%c", &sexo);
	
	if(sexo == 'f')
	 printf("Prazer Ilma. Sra %s", nome);
	 else
	 printf("Prazer Ilmo. Sr %s", nome);
	 
return 0;

}
