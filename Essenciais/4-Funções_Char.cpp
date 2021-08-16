#include <stdio.h>
#include <stdlib.h>

char	returnletra();

//Função principal
int	main()
{
	//Definição de variáveis
	char	c;

	//Atribuir valor a variavel char c através de uma função
	c = returnletra();

	//Imprimir o valor da variável char c
	printf("%c\n", c);

	return 0;
}

char	returnletra()
{
	return 'x';
}