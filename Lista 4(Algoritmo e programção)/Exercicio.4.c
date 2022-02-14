//4 – Construa um algoritmo que apresente os 20 primeiros termos da série de Fibonacci

#include<stdio.h>//biblioteca para printf e scanf
#include<stdlib.h> //biblioteca para limpar a tela 
#include<math.h>  //biblioteca para operações matemáticas
#include<locale.h>//biblioteca para pra aceitar caracter especial:setlocale(LC_ALL, "Portuguese");
#include<string.h>//biblioteca para strlen e strcmp: http://linguagemc.com.br/a-biblioteca-string-h/
#include<ctype.h>

int main(){
	
	int Fn = 1;
	
	for(int i = 0; i < 20; i++){
		Fn = Fn - 1 + Fn - 2;
		printf("%d", Fn);	
	}
}

//não entendi a sequência direito.
		
