#include <stdio.h>
#include <stdlib.h>

/**** Criar um algoritmo que imprima os números pares de 10 a 20
 * 	  usando (while, do while ou for)
****/

void	main()
{
	//Definição de variáveis
	int	i;

	//Ciclo WHILE
	i = 10;
	while (i <= 20)
	{
		if (i % 2 == 0)
		{
			printf("%d\n", i);
		}
		i++;
	}

	//Ciclo FOR
	for (i = 10; i <= 20; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d\n", i);
		}
	}
}