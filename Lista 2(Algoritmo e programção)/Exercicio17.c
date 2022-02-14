/*
17. Você tem um desejo incontrolável de descobrir quantos dias você já viveu em toda a sua vida,
então faça um algoritmo que leia o ano de nascimento de uma pessoa e o ano atual, depois
calcule e escreva o nome e o número de dias, aproximados, já vividos por essa pessoa.
*/

#include<stdio.h>
#include<math.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int nascimento, anos, diasVividos;
	char nome[20];
	
	printf("Informe o seu nome: ");
	scanf("%s", &nome);
	printf("Informe em que ano nasceu: ");
	scanf("%d", &nascimento);
	
	anos = 2021 - nascimento; 
	diasVividos = anos * 365;
	
	printf("Você viveu aproximadamente %d dias", diasVividos);
	
return 0;
}
