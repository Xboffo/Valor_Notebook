#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Joao deseja comprar um notebook que custa 8000,00
   Pagando a vista jo�o ir� conseguir um desconto de 10 %
   Pagando em duas vezes, conseguir� um desconto de 5%
   
   Escreva um programa que apresente o valor a ser pago pelo notebook nas duas condi��es acima. 

 */

int main(void) {
	
	double valornotebook,descontoavista,descontodividido,valoravista,valordividido,qtdvista,qtddiv;
	
	valornotebook= 8000.00;
	
	printf("Por favor digite a procentagem de desconto a vista:");
		scanf("%lf", &qtdvista);
		
			descontoavista= valornotebook * qtdvista / 100  ;
			
	printf("Por favor digite a procentagem de desconto a dividido:");
		scanf("%lf", &qtddiv);
		
			descontodividido= valornotebook * qtddiv / 100  ;
				
					valoravista= valornotebook - descontoavista;
					valordividido= valornotebook - descontodividido;
	
	printf("O valor com desconto a vista: %.2lf\n", valoravista);
	printf("O valor com desconto dividio : %0.2lf", valordividido);
	return 0;
}
