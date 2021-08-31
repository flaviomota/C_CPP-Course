#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10

using namespace std;

void	imprime_vetor(int vetor[TAM], int topo);
void	stack_push(int stack[TAM], int valorInserido, int *topo);
void	stack_pop(int stack[TAM], int *topo);
bool	stack_vazia(int topo);
bool	stack_cheia(int topo);
void	stack_construtor(int stack[TAM], int *topo);
int		stack_tamanho(int topo);
int		stack_get_last(int stack[TAM], int *topo);

int		main()
{
	int	stack[TAM];
	int	topo;			//encontra o topo da stack
	int	valorRetirado;

	stack_construtor(stack, &topo);

	//Imprimir o vetor
	imprime_vetor(stack, topo);

	stack_push(stack, 5, &topo);
	imprime_vetor(stack, topo);

	cout << "Ultimo valor da Stack: " << stack_get_last(stack, &topo);
	cout << "Tamanho da Stack: " << stack_tamanho(topo);

	stack_push(stack, 7, &topo);
	stack_push(stack, 7, &topo);
	stack_push(stack, 7, &topo);
	stack_push(stack, 7, &topo);
	stack_push(stack, 7, &topo);
	stack_push(stack, 7, &topo);
	stack_push(stack, 7, &topo);
	stack_push(stack, 7, &topo);
	stack_push(stack, 7, &topo);
	stack_push(stack, 7, &topo);

	imprime_vetor(stack, topo);

	stack_pop(stack, &topo);
	imprime_vetor(stack, topo);

}

void	imprime_vetor(int vetor[TAM], int topo)
{
	//Contador auxiliar
	int	count;

	cout << endl;
	count = 0;
	while (count < TAM)
	{
		cout << vetor[count] << " - ";
		count++;
	}

	cout << "Topo: " << topo;
}

void	stack_push(int stack[TAM], int valorInserido, int *topo)
{
	//Caso não se posso colocar mais valores -> stack cheia
	if (stack_cheia(*topo))
		cout << "Stack cheia!";
	else
	{
		*topo = *topo + 1;
		stack[*topo] = valorInserido;
	}
}

void	stack_pop(int stack[TAM], int *topo)
{
	if (stack_vazia(*topo))
	{
		cout << "Stack vazia!";
	}
	else
	{
		cout << "Valor Removido: " << stack[*topo];
		stack[*topo] = 0;
		*topo = *topo - 1;
	}
}

bool	stack_vazia(int topo)
{
	if (topo == -1)
		return true;
	else
		return false;
}

bool	stack_cheia(int topo)
{
	if (topo == TAM - 1)
		return true;
	else
		return false;
}

void	stack_construtor(int stack[TAM], int *topo)
{
	int count;

	//Colocar o topo negativo pra indicar uma pilha vazia
	*topo = -1;
	for (count = 0; count < TAM; count++)
		stack[count] = 0;
}

int		stack_tamanho(int topo)
{
	return topo + 1;
}

int		stack_get_last(int stack[TAM], int *topo)
{
	if (stack_vazia(*topo))
	{
		cout << "Stack vazia!";
		return 0;
	}
	else
	{
		return stack[*topo];
	}
}