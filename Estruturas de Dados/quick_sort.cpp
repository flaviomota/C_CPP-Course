#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10

using namespace std;

void	imprime_vetor(int vetor[]);
void	quick_sort(int vetor[TAM], int inicio, int fim);

int 	main()
{
	int	vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

	quick_sort(vetor, 0, TAM);
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

void	quick_sort(int vetor[TAM], int inicio, int fim)
{
	int	limiteEsquerda;
	int	limiteDireita;
	int	pivot;
	int	meio;
	int	swap;

	//limite da esquerda e da direita da região analisada
	limiteEsquerda = inicio;
	limiteDireita = fim;

	//Ajustar auxiliarres ao centro
	meio = (int)((limiteEsquerda + limiteDireita) / 2);
	pivot = vetor[meio];

	while (limiteDireita > limiteEsquerda)
	{
		while (vetor[limiteEsquerda] < pivot)
			limiteEsquerda = limiteEsquerda + 1;
		while (vetor[limiteDireita] > pivot)
			limiteDireita = limiteDireita - 1;
		if (limiteEsquerda <= limiteDireita)
		{
			//Efectua uma troca
			swap = vetor[limiteEsquerda];
			vetor[limiteEsquerda] = vetor[limiteDireita];
			vetor[limiteDireita] = swap;

			//Faz os limites laterais caminharem para o centro
			limiteEsquerda = limiteEsquerda + 1;
			limiteDireita = limiteDireita - 1;
		}
		//Ver alterações passo a passo
		imprime_vetor(vetor);
	}
	//Recursão para continuar a ordenar
	if (inicio < limiteDireita)
		quick_sort(vetor, inicio, limiteDireita);
	//Recursão para continuar a ordenar
	if (limiteEsquerda < fim)
		quick_sort(vetor, limiteEsquerda, fim);
}