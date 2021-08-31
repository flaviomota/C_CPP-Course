#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10

using namespace std;

void	imprime_vetor(int vetor[TAM]);
void	stack_push(int stack[TAM], int valorInserido, int *topo);
void	stack_pop(int stack[TAM], int *topo);

int		main()
{
	int	stack[TAM] = {0,0,0,0,0,0,0,0,0,0};
	int	topo;			//encontra o topo da stack
	int	valorRetirado;

	topo = -1;

	//Imprimir o vetor
	imprime_vetor(stack);

	stack_push(stack, 5, &topo);
	imprime_vetor(stack);

	stack_push(stack, 7, &topo);
	imprime_vetor(stack);

	stack_pop(stack, &topo);
	imprime_vetor(stack);

}

void	imprime_vetor(int vetor[TAM])
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
}

void	stack_push(int stack[TAM], int valorInserido, int *topo)
{
	//Caso não se posso colocar mais valores -> stack cheia
	if (*topo == TAM - 1)
	{
		cout << "Stack cheia!";
	}
	else
	{
		*topo = *topo + 1;
		stack[*topo] = valorInserido;
	}
}

void	stack_pop(int stack[TAM], int *topo)
{
	if (*topo == -1)
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