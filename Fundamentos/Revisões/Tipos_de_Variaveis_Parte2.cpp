#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#define TAM 3

using namespace std;

int	main()
{
	//Definição de vetores
	int	vetor[TAM] = {5,10,15};
	int	count;

	//Atribuir valor ao vetor

	/* -> Outra forma de atribuir valor a um vetor
	vetor[0] = 10;
	vetor[1] = 20;
	vetor[2] = 30;
	*/

	//Imprimir os valores do vetor
	printf("Imprimir o valor do vetor com PRINTF:\n");
	printf("Valor[0] = %d\n", vetor[0]);
	printf("Valor[1] = %d\n", vetor[1]);
	printf("Valor[2] = %d\n", vetor[2]);
	printf("\n");

	//Imprimir vetor com loops
		//Ciclo FOR
	printf("Imprimir o valor do vetor com ciclo FOR:\n");
	for (count = 0; count < TAM; count++)
	{
		printf("Valor[%d] = %d\n", count, vetor[count]);
	}
	printf("\n");

		//Ciclo WHILE
	printf("Imprimir o valor do vetor com ciclo WHILE:\n");
	count = 0;
	while (count < TAM)
	{
		printf("Valor[%d] = %d\n", count, vetor[count]);
		count++;
	}
	printf("\n");

	//Definição de matrizes
	int	matriz[TAM][TAM] = {1,2,3,4,5,6,7,8,9};
	int	i;	// -> variável criada para ajudar a imprimir a matriz
	int	j;	// -> variável criada para ajudar a imprimir a matriz


	//Imprimir os valores de uma matriz
		//Ciclo FOR
	cout << "Imprimir os valores uma matrizz com o ciclo WHILE:" << endl;
	for (i = 0; i < TAM; i++)
	{
		for (j = 0; j < TAM; j++)
		{
			printf("Matriz[%d][%d] =  %d\n", i, j, matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");

		//Ciclo WHILE
	cout << "Imprimir os valores uma matrizz com o ciclo FOR:" << endl;
	i = 0;
	while (i < TAM)
	{
		j = 0;
		while (j < )
		{
			printf("Matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}


	return 0;
}