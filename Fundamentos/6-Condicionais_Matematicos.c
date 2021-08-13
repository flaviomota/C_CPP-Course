#include <stdio.h>
#include <stdlib.h>

void	main()
{
	//Definição de variáveis
	int		a;
	int		b;
	int		c;
	char	d;

	a = 5;
	b = 10;
	c = 15;
	d = 'x';

	//Maior
	if (a > 2)
	{
		printf("A variável %d maior que (>) 2\n", a);
	}

	//Maior ou igual
	if (c >= b)
	{
		printf("A variável %d maior ou igual que (>=) %d\n", c, b);
	}
	
	//Menor
	if (a < 10)
	{
		printf("A variavel %d menor que (<) 10\n", a);
	}

	//Menor ou igual
	if (a <= 10)
	{
		printf("A variavel %d menor ou igual que (<=) 10\n", a);
	}

	//Diferente
	if (c != 10)
	{
		printf("A variavel %d diferente (!=) de 10\n", c);
	}
	if (d != 'a')
	{
		printf("A variavel %c diferente (!=) de a\n", d);
	}
}