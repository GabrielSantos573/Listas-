/*
15. Faça um algoritmo que calcule e escreva o valor a ser pago a sua provedora de acesso à
Internet, para isso você deverá ler a quantidade de horas que você utilizou. Sabe-se que você
pagará R$ 30,00 por até 20 horas de uso (va1or básico), caso você tenha usado mais de 20
horas, então você deve acrescentar 10% do valor básico para cada hora extra utilizada.
*/

#include<stdio.h>
#include<math.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int horas, excesso;
	float pagamento;
	
	printf("Diga a quantidade de horas utilizadas: ");
	scanf("%d", &horas);
	
	if(horas <= 20)
	printf("O valor a ser pago é R$30,00");
	else {
		excesso = horas - 20;
    	pagamento = 30 + (excesso * 3);
    
    	printf("O valor a ser pago é %.2f", pagamento);
	}
	
return 0;

}
