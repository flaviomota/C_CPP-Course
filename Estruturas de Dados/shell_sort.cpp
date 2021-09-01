#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10

using namespace std;

void	imprime_vetor(int vetor[]);
void	shell_sort(int vetor[TAM]);

int 	main()
{
	int	vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

	shell_sort(vetor);
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

void	shell_sort(int vetor[TAM])
{
	int	i;
	int	j;
	int	atual;
	int	h;

	h = 1;
	//Definição do salto entre analises
	while (h < TAM)
		h =  3* h + 1;
	while (h > 1)
	{
		//Reduz a distancia entre analises
		h = h / 3;

		for (i = h; i < TAM; i++)
		{	
			//Elemento atual em analise
			atual = vetor[i];

			//Elemento anterior ao analise atual
			j = i - h;

			//Faz a analise dos elementos anteriores
			while ((j >= 0) && (atual < vetor[j]))
			{
				//Move os elementos uma posição para a frente
				vetor[j + h] =  vetor[j];
				//Faz a variável j andar para trás
				j = j - h;
			}
			/*
			Agora que o espaço foi aberto, inserimos o atual (menor número) na posição correta
			(posição mais à esquerda possivel)
			*/
			vetor[j + h] = atual;

			//Imprime cada uma das alterações
			imprime_vetor(vetor);
		}
	}
}
