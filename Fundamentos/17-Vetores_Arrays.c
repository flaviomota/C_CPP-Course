#include <stdio.h>
#include <stdlib.h>
#define TAM 3

void	main()
{
	//Definição de variáveis
	int	vetor[TAM];
	int	count;

	//Adicionar valores a um vetor
	vetor[0] = 5;
	vetor[1] = 10;
	vetor[2] = 15;

	//Aceder e exibir os valores adicionados a vetores
	printf("Posição 0: %d\n", vetor[0]);
	printf("Posição 1: %d\n", vetor[1]);
	printf("Posição 2: %d\n", vetor[2]);
	printf("\n");

	//Utilizar vetor em ciclo de repetição
		//Ciclo FOR
	for (count = 0; count < TAM; count ++)
	{
		printf("Posição %d: %d\n", count, vetor[count]);
	}
	printf("\n");

		//Ciclo WHILE
	count = 0;
	while (count < TAM)
	{
		printf("Posição %d: %d\n", count, vetor[count]);
		count++;
	}

	//Atribuir valores a vetores
	for (count = 0; count < TAM; count++)
	{
		scanf("%d", &vetor[count]);
	}

	for (count = 0; count < TAM; count++)
	{
		printf("Posição %d: %d\n", count, vetor[count]);
	}
}