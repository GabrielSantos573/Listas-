//2. Efetuar a leitura de um n�mero e apresent�-lo como o seu m�dulo (somente seu valor
//absoluto) elaborando os c�lculos matem�ticos para isso

#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
	 setlocale(LC_ALL, "Portuguese");
	int numero, modulo;
	
	printf("Digite qualquer n�mero: ");
	scanf("%d", &numero);
	
	modulo = abs(numero);
	
	printf("M�dulo: %d", modulo);
}
