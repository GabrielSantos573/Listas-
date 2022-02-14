//3. Faça um algoritmo que apresenta a menor altura entre 10 pessoas, usando apenas a repetição
//enquanto.

#include<stdio.h>

int main(){
	float altura, menor = 0;
	int i = 0;
	
	while(i<10){
		i++;
		printf("Informe a sua altura: ");
		scanf("%f", &altura);
		
		if(menor == 0)
			menor = altura;
		else if(altura < menor)
			menor = altura;
  }
  
  printf("O(A) menor é: %f ", menor);
}

