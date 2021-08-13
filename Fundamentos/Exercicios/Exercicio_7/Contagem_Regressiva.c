#include <stdio.h>
#include <stdlib.h>

/**** Criar um algoritmo que imprima de 10 a 0 de forma regressiva.
 * 	  Usar os ciclos: WHILE, DO WHILE e FOR
****/

void	main()
{
	//Definição de variáveis
	int	count;

	count = 10;

	//Ciclo WHILE
	printf("Feito com o ciclo WHILE:\n");
	while (count >= 0)
	{
		printf("%d\n", count);
		count--;
	}

	//Ciclo DO WHILE
	printf("\nFeito com o ciclo DO While:\n");
	count = 10;
	do
	{
		printf("%d\n", count);
		count--;
	}
	while (count >= 0);

	//Ciclo FOR
	printf("\nFeito com o ciclo FOR:\n");
	for (count = 11; count >= 0, count--;)
	{
		printf("%d\n", count);
	}
}