#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10

using namespace std;

void	imprime_vetor(int vetor[]);
void	selection_sort(int vetor[TAM]);

int 	main()
{
	int	vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

	selection_sort(vetor);
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

void	selection_sort(int vetor[TAM])
{
	int	posicaoDoValorMenor;
	int	i;
	int	j;
	int	aux;

	for (i = 0; i < TAM; i++)
	{
		//Recebe a posição para o valor menor
		posicaoDoValorMenor = i;
		//Analisa os elementos à frente
		for (j = i + 1; j < TAM; j++)
		{
			//Caso encontre um valor menor que os valores analisados à frente
			if (vetor[j] < vetor[posicaoDoValorMenor])
			{
				posicaoDoValorMenor = j;
			}
		}
		//Verifica se houve mudança e troca os valores
		if (posicaoDoValorMenor != i)
		{
			aux = vetor[i];
			vetor[i] = vetor[posicaoDoValorMenor];
			vetor[posicaoDoValorMenor] = aux;
		}
		//Imprime as alterações passo a passo
		imprime_vetor(vetor);
	}
}