/*
15. Fa�a um algoritmo que calcule e escreva o valor a ser pago a sua provedora de acesso �
Internet, para isso voc� dever� ler a quantidade de horas que voc� utilizou. Sabe-se que voc�
pagar� R$ 30,00 por at� 20 horas de uso (va1or b�sico), caso voc� tenha usado mais de 20
horas, ent�o voc� deve acrescentar 10% do valor b�sico para cada hora extra utilizada.
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
	printf("O valor a ser pago � R$30,00");
	else {
		excesso = horas - 20;
    	pagamento = 30 + (excesso * 3);
    
    	printf("O valor a ser pago � %.2f", pagamento);
	}
	
return 0;

}
