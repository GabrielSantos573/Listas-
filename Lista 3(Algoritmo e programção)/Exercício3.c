//3. Fa�a um algoritmo que apresenta a menor altura entre 10 pessoas, usando apenas a repeti��o
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
  
  printf("O(A) menor �: %f ", menor);
}

