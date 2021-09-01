#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10

using namespace std;

void	imprime_vetor(int vetor[]);
void	bubble_sort(int vetor[TAM]);

int 	main()
{
	int	vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

	bubble_sort(vetor);
	imprime_vetor(vetor);

	return 0;
}

void	imprime_vetor(int vetor[])
{
	//Contador auxiliar
	int	i;

	i = 0;
	while (i < TAM)
	{
		cout << " |" << vetor[i] << "| ";
		i++;
	}
	cout << endl;
}

void	bubble_sort(int vetor[TAM])
{
	int	x;			//primeira posição do vetor
	int y;			//segunda posição do vetor
	int aux;		//auxiliar para fazer troca de valores

	//Analise do valor da esquerda
	for (x = 0; x < TAM; x++)
	{
		//Analise do valor da direita
		for (y = x +1; y < TAM; y++)
		{
			imprime_vetor(vetor);		//imprime o vetor para irmos vendo as alterações feitas
			//Confere se é necessário fazer a troca
			if (vetor[x] > vetor[y])
			{
				aux = vetor[x];
				vetor[x] = vetor[y];
				vetor[y] = aux;
			}
		}
	}
}