//Escreva um programa que leia o nome do funcion�rio, o sexo (F ou M), o n�mero de
//matr�cula do funcion�rio, o n�mero de horas trabalhadas, o valor que recebe por hora
//e calcule o sal�rio desse funcion�rio. A seguir, mostre todos os dados na tela, os dados
//de entrada e os dados de sa�da

#include<stdio.h>

int main(){
	
	char nome[15], sexo, matricula[20];
	float horas, valorHora, salario;
	
	printf("Nome: ");
	scanf("%s", &nome);
	fflush(stdin);
	printf("Sexo: ");
	scanf("%c", &sexo);
	printf("Matricula: ");
	scanf("%s", &matricula);
	
	printf("Horas trabalhadas: ");
	scanf("%f", &horas);
	printf("Valor recebido por hora: ");
	scanf("%f", &valorHora);
	
	salario = horas * valorHora;
	system("cls");
	printf("Nome: %s\n", nome);
	printf("Sexo: %c\n", sexo);
	printf("Matricula: %s\n", matricula);
	printf("Horas: %f\n", horas);
	printf("Valor recebido por hora: %f\n", valorHora);
	printf("Salario: %f\n", salario);
	
	return 0;
	
	
}
