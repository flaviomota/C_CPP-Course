#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

int	main()
{
	/*
	//Definição de uma variável
	int	a;

	a = 20;

	//Imprimir o valor de uma variável
	printf("Valor de a = %d\n", a);

	//Imprimir o endereço na memória de uma variável
	printf("O endereço da variável a = %d \n", &a);

	/****
	 * Variáveis armazenam valores.
	 * Ponteiro armazenam posições da memória.
	****/
	
	//Definição de uma variável
	int	b;

	b = 10;

	//Definição de um ponteiro
	int	*ponteiro;

	ponteiro = &b; // -> recebe a posição na memória da variável b

	//Imprimir o valor da variável b
	printf("Valor da variável b: %d\n", b);

	// * -> lê-se como: "CONTEÚDO APONTADO POR"
	*ponteiro = 40;

	//Imprimir o valor da variável b
	printf("Valor da variável b: %d\n", b);

	return 0;
}
