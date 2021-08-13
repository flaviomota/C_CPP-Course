#include <stdio.h>
#include <stdlib.h>

void	main()
{
	//Definição de variáveis
	int		a;
	float	b;
	char	c;
	int		opcao;

	a = 5;
	b = 2.5;
	c = 'x';
	opcao = 3;

	//Condicional Simples
	if (a == 5)
	{
		printf("A variavel a = 5\n");
	}
	if (b == 2.5)
	{
		printf("A variavel b = 2.5\n");
	}
	if (c == 'x')
	{
		printf("A varivale c = letra x\n");
	}

	//Condicional Composta
	if (opcao == 1)
		printf("A variavel opcao = 1\n");
	else if (opcao == 2)
		printf("A variavel opcao = 2\n");
	else
		printf("A variavel diferente de 1 e 2\n");


	//Número impar ou par
	if (a % 2 == 1)
	{
		printf("A variavel a = impar\n");
	}
	else
	{
		printf("A variavel a = par\n");
	}

}