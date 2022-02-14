//3 – Construa um algoritmo que seja capaz de dar a classificação olímpica de 3 países informados.
//Para cada país é informado o nome, a quantidade de medalhas de ouro, prata e bronze. Considere
//que cada medalha de ouro tem peso 3, cada prata tem peso 2 e cada bronze, peso 1.

#include<stdio.h>//biblioteca para printf e scanf
#include<stdlib.h> //biblioteca para limpar a tela 
#include<math.h>  //biblioteca para operações matemáticas
#include<locale.h>//biblioteca para pra aceitar caracter especial:setlocale(LC_ALL, "Portuguese");
#include<string.h>//biblioteca para strlen e strcmp: http://linguagemc.com.br/a-biblioteca-string-h/
#include<ctype.h> //biblioteca para o uso do toupper e tolower: http://linguagemc.com.br/ctype-h-toupper-tolower-isalpha-isdigit-em-c/

int main(){
	
	int qntOuro, qntBronze, qntPrata, total[2];
	char paises[2][25];
	
	for(int i = 0; i < 3; i++){
		printf("\nNome do país: ");
		scanf("%s", &paises[i]);
		
		printf("Medalhas de ouro recebidas: ");
		scanf("%d", &qntOuro);
		
		printf("Medalhas de prata recebidas: ");
		scanf("%d", &qntPrata);
		
		printf("Medalhas de bronze recebidas: ");
		scanf("%d", &qntBronze);
		
		total[i] = ((qntOuro * 3) + (qntPrata * 2) + (qntBronze * 1));
		printf("\nTOTAL: %d\n", total[i]);
	}
	
	if(total[0] > total[1] && total[0] > total[2] && total[1] > total[2]){
		printf("\nPrimeiro: Nome:%s\t Pontos: %d",paises[0], total[0]);
		printf("\nSegundo: Nome:%s\t Pontos: %d",paises[1], total[1]);
		printf("\nTerceiro: Nome:%s\t Pontos: %d",paises[2], total[2]);
		
	}else if(total[0] > total[1] && total[0] > total[2] && total[2] > total[1]){
		printf("\nPrimeiro: Nome:%s\t Pontos: %d",paises[0], total[0]);
		printf("\nSegundo: Nome:%s\t Pontos: %d",paises[2], total[2]);
		printf("\nTerceiro: Nome:%s\t Pontos: %d",paises[1], total[1]);
		
	}else if(total[1] > total[0] && total[1] > total[2] && total[0] > total[2]){
		printf("\nPrimeiro: Nome:%s\t Pontos: %d",paises[1], total[1]);
		printf("\nSegundo: Nome:%s\t Pontos: %d",paises[0], total[0]);
		printf("\nTerceiro: Nome:%s\t Pontos: %d",paises[2], total[2]);
		
	}else if(total[1] > total[0] && total[1] > total[2] && total[2] > total[0]){
		printf("\nPrimeiro: Nome:%s\t Pontos: %d",paises[1], total[1]);
		printf("\nSegundo: Nome:%s\t Pontos: %d",paises[2], total[2]);
		printf("\nTerceiro: Nome:%s\t Pontos: %d",paises[0], total[0]);
	
	}else if(total[2] > total[0] && total[2] > total[1] && total[1] > total[0]){
		printf("\nPrimeiro: Nome:%s\t Pontos: %d",paises[2], total[2]);
		printf("\nSegundo: Nome:%s\t Pontos: %d",paises[1], total[1]);
		printf("\nTerceiro: Nome:%s\t Pontos: %d",paises[0], total[0]);
	
	}else{
		printf("\nPrimeiro: Nome:%s\t Pontos: %d",paises[2], total[2]);
		printf("\nSegundo: Nome:%s\t Pontos: %d",paises[0], total[0]);
		printf("\nTerceiro: Nome:%s\t Pontos: %d",paises[1], total[1]);
	}
			
		
}
