#include <stdio.h>
#include <stdlib.h>

void	main()
{
	//Definição de variáveis
	int	a;

	a = 10;

	//Operador Lógico E ( && )
	if (a > 5 && a < 15)
	{
		printf("A variavel 'a' esta entre 5 e (&&) 15\n");
	}

	//Operador Lógico OU ( || )
	if (a > 5 || a > 15)
	{
		printf("A variavel 'a' e maior que 5 ou (||) 15\n");
	}

	//Operador Lógico E e OU ( && || )
	if ((a > 5 && a < 15) || a == 20)
	{
		printf("A variavel 'a' esta entre 5 e (&&) 15 ou (||) ela vale 20\n");
	}
}