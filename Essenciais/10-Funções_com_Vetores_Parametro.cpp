#include <stdio.h>
#include <stdlib.h>
#include <iostream>

//Invocação de cabeçalhos
void	imprimeVetor(int *vetor, int tamanho);
void	modificarVetor(int *vetor, int tamanho);

//Função principal
int	main()
{
	//Definição de vetores
	int	v[3] = {1,2,3};

	//Imprimir o vetor
	imprimeVetor(v, 3);

	//Modificar o vetor
	modificarVetor(v, 3);

	//Imprimir o vetor com os novos valores
	imprimeVetor(v, 3);

	return 0;
}

//Funções auxiliares
void	imprimeVetor(int *vetor, int tamanho)
{
	int	i;

	//Percorrer o vetor
	i = 0;
	while (i < tamanho)
	{
		printf("%d\n", vetor[i]);
		i++;
	}
}

void	modificarVetor(int *vetor, int tamanho) // -> Função que adiciona +1 a cada vetor
{
	int i;

	i = 0;
	while (i < tamanho)
	{
		vetor[i] = vetor[i] + 1;
		i++;
	}
}
