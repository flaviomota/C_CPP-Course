#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10

using namespace std;

void	imprime_vetor(int vetor[TAM], int tamanho);
void	queue_construtor(int *primeiro, int *ultimo);
void	enqueue_enfileirar(int	fila[TAM], int valor, int *ultimo);
int		queue_tamanho(int ultimo, int primeiro);
void	dequeue_desenfileirar(int fila[TAM], int *primeiro, int ultimo);
bool	queue_vazia(int primeiro, int ultimo);
bool	queue_cheia(int ultimo);

int		main()
{
	int	fila[TAM] = {0,0,0,0,0,0,0,0,0,0};
	int	primeiro;
	int	ultimo;
	int	valor;

	queue_construtor(&primeiro, &ultimo);

	enqueue_enfileirar(fila, 5, &ultimo);
	enqueue_enfileirar(fila, 7, &ultimo);

	dequeue_desenfileirar(fila, &primeiro, ultimo);
	dequeue_desenfileirar(fila, &primeiro, ultimo);
	dequeue_desenfileirar(fila, &primeiro, ultimo);


	enqueue_enfileirar(fila, 9, &ultimo);

	imprime_vetor(fila, queue_tamanho(ultimo, primeiro));

	return 0;
}

void	imprime_vetor(int vetor[TAM], int tamanho)
{
	//Contador auxiliar
	int	count;

	count = 0;
	while (count < TAM)
	{
		cout << vetor[count] << " - ";
		count++;
	}
}

void	queue_construtor(int *primeiro, int *ultimo)
{
	*primeiro = 0;
	*ultimo = -1;
}

void	enqueue_enfileirar(int	fila[TAM], int valor, int *ultimo)
{
	if (queue_cheia(*ultimo))
		cout << "Queue cheia!";
	else
	{
		*ultimo = *ultimo + 1;
		fila[*ultimo] = valor;
	}
}

int		queue_tamanho(int ultimo, int primeiro)
{
	return (ultimo - primeiro) + 1;
}

void	dequeue_desenfileirar(int fila[TAM], int *primeiro, int ultimo)
{
	if (queue_vazia(*primeiro, ultimo))
	{
		cout << "Impossivel desenfileirar uma lista vazia" << endl;
	}
	else
	{
		cout << "O valor " << fila[*primeiro] << " foi removido" << endl;
		fila[*primeiro] = 0;
		*primeiro = *primeiro + 1;
	}
}

bool	queue_vazia(int primeiro, int ultimo)
{
	if (primeiro > ultimo)
		return true;
	else
		return false;
}

bool	queue_cheia(int ultimo)
{
	if (ultimo == TAM - 1)
		return true;
	else
		return false;
}