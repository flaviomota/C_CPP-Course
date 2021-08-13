#include <stdio.h>
#include <stdlib.h>

void	main()
{
	//Definição de variáveis
	int	a;

	a = 1;

	//Ciclo While --> primeiro confere a condição e só depois executa os comandos.
	while (a <= 10)
	{
		printf("%d\n", a);
		a++;
	}

	//Ciclo Do While --> primeiro executa uma vez e só depois é que verifica a condição.
	a = 1;

	do
	{
		printf("%d\n", a);
		a++;
	} while (a <= 10);
	
}