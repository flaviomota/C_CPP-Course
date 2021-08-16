#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool	retornaBooleano();

//Função principal
int	main()
{
	//Definição de variáveis
	bool	variavel;

	//Variável que recebe valor através de uma função
	variavel = retornaBooleano();

	printf("%d\n", variavel);

	//Se for verdadeiro executa o primeiro bloco
	if (variavel)
	{
		printf("É verdadeiro!\n");
	}
	else //Se não for verdadeira executa o segundo bloco
	{
		printf("É falso!\n");
	}

	return 0;
}

bool	retornaBooleano()
{
	return true;
}
