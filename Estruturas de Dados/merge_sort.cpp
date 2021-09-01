#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10

using namespace std;

void	imprime_vetor(int vetor[]);
void	merge_sort(int vetor[TAM], int indiceEsquerda, int indiceDireita);
void	merge(int vetor[TAM], int indiceEsquerda, int meio, int indiceDireita);

int 	main()
{
	int	vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};
	
	imprime_vetor(vetor);
	merge_sort(vetor, 0, TAM - 1);
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

void	merge_sort(int vetor[TAM], int indiceEsquerda, int indiceDireita)
{
	int meio;

	if (indiceEsquerda < indiceDireita)
	{	
		//Encontrar o meio
		meio = indiceEsquerda + (indiceDireita - indiceEsquerda) / 2;

		//Da metade para trás
		merge_sort(vetor, indiceEsquerda, meio);
		
		//Da metade para a frente
		merge_sort(vetor, meio + 1, indiceDireita);

		//Ver passo a passo
		imprime_vetor(vetor);

		//Função que une os dois sub arrays que foram criados
		merge(vetor, indiceEsquerda, meio, indiceDireita);
	}
}

//Função que une os dois sub arrays que foram criados
void	merge(int vetor[TAM], int indiceEsquerda, int meio, int indiceDireita)
{
	int i;
	int j;
	int	k;
	int n1;			//Tamanho do primeiro vetor auxiliar
	int	n2;			//Tamanho do segundo vetor auxiliar

	//Cria dois arrays temporários
	int	vetorEsquerdo[n1];
	int vetorDireita[n2];

	n1 = meio - indiceEsquerda + 1;
	n2 = indiceDireita - meio;

	//Passa os elementos do vetor principal para o primeiro vetor auxiliar (vetorEsquerda)
	for (i = 0; i < n1; i++)
		vetorEsquerdo[i] = vetor[indiceEsquerda + 1];

	//Passa os elementos do vetor principal para o segundo vetor auxiliar (vetorDireita)
	for (j = 0; j < n2; j++)
		vetorDireita[j] = vetor[meio + 1 + j];

	//Reeniciar as variáveis para serem utilizadas novamente
	i = 0;
	j = 0;
	k = indiceEsquerda;

	while ((i < n1) && (j < n2))
	{
		//Caso o valora da esquerda seja menor
		if (vetorEsquerdo[i] <= vetorDireita[j])
		{
			//Passo para o meu vetor principal
			vetor[k] = vetorEsquerdo[i];
			//Incrementa o auxiliar para passar a analise para os próximos valores do vetor auxiliar
			i++;
		}
		else
		{
			//Passo para o meu vetor principal
			vetor[k] = vetorDireita[j];
			//Incrementa o auxiliar para passar a analise para os próximos valores do vetor auxiliar
			j++;
		}
		//Aumenta o indice de posicionamento no vetor
		k++;
	}

	//Se faltarem alguns elementos do array Esquerdo, passa eles para o array principal
	while (i < n1)
	{
		vetor[k] = vetorEsquerdo[i];
		i++;
		k++;
	}

	//Se faltarem alguns elementos do array Direito, passa eles para o array principal
	while (j < n2)
	{
		vetor[k] = vetorDireita[j];
		j++;
		k++;
	}
}

