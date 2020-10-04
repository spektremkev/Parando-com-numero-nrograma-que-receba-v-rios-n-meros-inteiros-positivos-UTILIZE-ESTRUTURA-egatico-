#include <stdio.h>
#include <stdlib.h>

/* atividade 2_questão 2 */
int main(){

	int num, mult2=0 ;
	do{
	printf("Digite um numero positivo,ou negativo se quiser fechar o programa: "); 
		scanf("%d",&num);
		
			if(num % 3 == 0 && num>=0)	mult2= mult2+1;
	
	}while(num>=0);
	printf("\nA quantidade de numeros multiplos de dois que voce escreveu foi de %d numeros",mult2);
}
