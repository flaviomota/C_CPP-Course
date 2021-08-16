#include <stdio.h>
#include <stdlib.h>

/****
 * Criar um algorimo que leia 3 valores para um vetor de 3 poisções.
 * Depois calcular a média dos valores do vetor.
****/

void	main()
{	
	//Definição de variáveis
	int		count;
	int		max;
	float	vetor[4];
	float	average;
	float	sum;

	//Definir tamanho do vetor
	printf("Inserir o número de elementos:\n");
	scanf("%d", &max); //guarda o tamanho máximo que o vetor por atingir

	//Verificar se o valor é aceitável
	while (max > 3 || max < 1)
	{
		printf("Erro!Número selecionado inválido!\n");
		printf("Inserir número novamente:\n");
		scanf("%d", &max);
	}

	//Guardar os valores inserido para os vetores
	count = 0;
	sum = 0.0;
	while (count < max)
	{
		printf("Inserir o valor nº%d:\n", count + 1);
		scanf("%f", &vetor[count]);
		sum = sum + vetor[count];
		count++;
	}

	//Calcular o valor médio de um vetor
	average = sum / max;
	printf("O valor médio = %.2f\n", average);
	return ;
}