//Construa um algoritmo que a partir da leitura de dois números forneça o resto e o
//quociente da divisão do primeiro pelo segundo número.

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
