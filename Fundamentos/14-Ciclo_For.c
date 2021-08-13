#include <stdio.h>
#include <stdlib.h>

void	main()
{
	//Definição de variáveis
	int	count;

	//Contar até 10
	for (count = 1; count <= 10; count++)
	{
		printf("%d\n", count);
	}

	//Exemplo de uma tabuada
	for (count = 1; count <= 10; count++)
	{
		printf("5 X %d = %d\n", count, (5 * count));
	}

	//Contar de 2 em 2
	for (count = 0; count <= 10; count = count + 2)
	{
		printf("%d\n", count);
	}

	//Contagem regressiva
	for (count = 10; count > 0; count--)
	{
		printf("%d\n", count);
	}
}