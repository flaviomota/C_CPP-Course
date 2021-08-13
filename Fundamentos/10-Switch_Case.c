#include <stdio.h>
#include <stdlib.h>

void	main()
{
	//Definição de variáveis
	int		a;
	char	c;

	a = 1;
	c = 'x';

	//Exemplo com ciclo IF
	if (a == 1)
	{
		printf("Opção escolhida: 1\n");
	}
	else if (a == 2)
	{
		printf("Opção escolhida: 2\n");
	}
	else if (a == 3)
	{
		printf("Opção esolhida: 3\n");
	}
	else
	{
		printf("Opção inválida\n");
	}

	//Utilziar Switch para o mesmo caso
	switch (a)
	{
	case 1:
		printf("Opção escolhida: 1\n");
		break;
	case 2:
		printf("Opção esolhida: 2\n");
		break;
	case 3:
		printf("Opção escolhida: 3\n");
		break;
	default:
		printf("Opção Inválida\n");
		break;
	}

	//Utilizar Swaitch com variáveis Char
	switch (c)
	{
		case 'x':
			printf("A letra é 'x'\n");
			break;
		default:
			printf("Opção Inválida\n");
			break;
	}
}