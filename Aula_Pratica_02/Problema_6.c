/*
 *  Created on: 28/10/2015
 *      Author: Gonçalo Pereira
 */
// ESTE PROGRAMA FUNCIONA COMO ESPERADO, MAS NÃO ESTÁ IMPLEMENTADO COMO PEDIDO. POR FAVOR COMUNIQUE SE SOUBER A RESPOSTA
#include <stdio.h>

int main(){
	double numero;
	int inteiro;

	printf("Insere um número ");
	scanf("%lf", &numero);
	
	inteiro = numero;

	while((inteiro+1)%2 == 0){
		inteiro++;
	}

	printf("%d ", inteiro);
	inteiro = numero;


	while((inteiro-1)%2 == 0){
		inteiro--;
	}
	printf("%d \n", inteiro);
return 0;
}