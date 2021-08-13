#include <stdio.h>
#include <stdlib.h>

void	main()
{
	//Definição de variáveis
	int	a;
	int	b;

	a = 1;
	b = 10;

	//Contar até 10
	while (a <= 10)
	{
		printf("%d\n", a);
		//Incrementação
		a++; // a = a + 1;
	}

	//Contagem regressiva
	while (b >= 1)
	{
		printf("%d\n", b);
		//Decrementação
		b--; // b = b - 1;
	}
}