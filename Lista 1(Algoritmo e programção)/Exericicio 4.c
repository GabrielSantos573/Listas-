//Construa um algoritmo que a partir da leitura de dois n�meros forne�a o resto e o
//quociente da divis�o do primeiro pelo segundo n�mero.

#include<stdio.h>

int main(){
	 int dividendo, divisor, quociente, resto;
	
printf("Digite o dividendo: ");
scanf("%d", &dividendo);
printf("Digite o divisor: ");
scanf("%d", &divisor);

quociente = dividendo/divisor;
printf("Quociente: %d\n", quociente);

resto = dividendo%divisor;
printf("Resto: %d", resto);

return 0;
}
