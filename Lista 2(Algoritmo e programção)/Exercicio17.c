/*
17. Voc� tem um desejo incontrol�vel de descobrir quantos dias voc� j� viveu em toda a sua vida,
ent�o fa�a um algoritmo que leia o ano de nascimento de uma pessoa e o ano atual, depois
calcule e escreva o nome e o n�mero de dias, aproximados, j� vividos por essa pessoa.
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
	
	printf("Voc� viveu aproximadamente %d dias", diasVividos);
	
return 0;
}
