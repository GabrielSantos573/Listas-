//Construa um algoritmo que leia um número inteiro de horas e mostre ao usuário o
//correspondente em minutos e segundos destas horas.
#include<stdio.h>
int main(){
	int hora, minuto, segundo; 
	
	printf("Digite as horas: ");
	scanf("%d",&hora);
	
	minuto = hora * 60;
	segundo= hora * 3600;
	
	printf("%d horas em minuto: %d\n", hora, minuto);
	printf("%d horas em segundo: %d", hora, segundo);
	
	return 0; 
}
