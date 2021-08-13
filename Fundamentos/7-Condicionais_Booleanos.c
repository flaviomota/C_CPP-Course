#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void	main()
{
	//Definição de variáveis
	bool	a;
	bool	b;

	a = true;
	b = false;

	//Se A for verdadeiro
	if (a)
	{
		printf("A variavel a e verdadeira\n");
	}

	//Comparar B
	if (b)
	{
		printf("A variavel b e verdadeira\n");
	}
	else
	{
		printf("A variavel b e falsa\n");
	}

	//Comprar casos falsos
	if (!b)
	{
		printf("A variavel b e falsa\n");
	}

}