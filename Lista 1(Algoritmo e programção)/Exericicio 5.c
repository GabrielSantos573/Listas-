//Fazer um algoritmo para auxiliar um construtor a descobrir a quantidade de rolos e a
//quantidade de metros avulsos de fios que ele precisa adquirir. Sabe-se que o
//construtor tem a quantidade total de fios em metros a serem utilizados na instalação
//elétrica da obra e que cada rolo de fio tem 50 metros.

#include <stdio.h>
#include <math.h>

int main(){
	
	int rolos, totalM, metros;
	
	printf("Digite quantos metros que seram usados:");
	scanf("%d", &totalM);
	
    if(totalM >= 50){
    	
    	rolos = totalM / 50;
    	printf("O total de rolos: %d\n", rolos);
    
    	metros = totalM % 50;
    	printf("O total de metros avulsos: %d\n", metros);
	}
	else{
		printf("O total de metros: %d\n", totalM);		
	}
	
	  return 0;
}
