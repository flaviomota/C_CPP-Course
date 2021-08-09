#include <stdio.h>
#include <stdlib.h>

void	main()
{
	//Definião de variáveis:
	int	a;
	int	b;

	a = 1;
	b = 2;

	//Imprimir o valor de uma variável:
	printf("O valor da variável a e: %d\n", a);
	printf("O valor da variável b e: %d\n", b);

	//Mudar o valor de uma variavel já atribuida:
	a = 23;
	printf("O valor da variável a e: %d\n", a);

	//Ler valor introduzidos:
	int	c;

	printf("Introduzir um valor para a variavel c:\n");
	scanf("%d", &c);
	printf("O valor intorduzido para a varável c foi: %d\n", c);
}