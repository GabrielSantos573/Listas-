/*
6. Fa�a um algoritmo que receba o sexo e a nota dos alunos de uma classe e apresente a m�dia
das notas dos alunos e a m�dia das notas das alunas. O algoritmo dever� apresentar os
resultados solicitados quando for fornecida uma nota negativa.(Seria s� por tudo dentro do while e executar enquanto for diferetnte de qualquer n�mero negatico)
*/

#include<stdio.h>

int main(){
	 
	 char sexo;
	 int alunos, qntF = 0, qntM = 0;
	 float mediaM = 0, mediaF = 0, nota, notasF = 0, notasM = 0;
	 
	 printf("Diga quantos alunos ha: ");
	 scanf("%i", &alunos);
	 
	 for(int i = 0; i < alunos; i++){
	 	printf("Digite a sua nota:");
	 	scanf("%f", &nota);
	 	
	 	fflush(stdin);
	 	
	 	printf("Informe o sexo: ");
	 	scanf("%c", &sexo);
	 	
	 	if (sexo == 'f'){
	 		qntF++;
	 		notasF += nota;
		}else{
	 		qntM++;
	 		notasM += nota;
		 }
	 		
	 }
	 mediaF = notasF/qntF;
	 mediaM = notasM/qntM;
	 	
	 printf("Media das alunas: %.2f\n", mediaF);
	 
	 printf("Media dos alunos: %.2f", mediaM);
	 	
return 0; 
	 
}
