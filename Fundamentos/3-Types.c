#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void	main()
{
	//Definição de variáveis:
	int		a;
	float	b;
	char	c;
	bool	d;

	//Atribuir valores às variáveis:
	a = 5;
	b = 2.3;
	c = 'a';
	d = true; //true = 1, false = 0

	//Imprimir os valores das variáveis:
	printf("O valor de a = %d\n", a);
	printf("O valor de b = %.2f\n", b);
	printf("O valor de c = %c\n", c);
	printf("O valor de d = %d\n", d);

	//Ler valores
	printf("Introduzir novo valor para a variavel a = ");
	scanf("%d", &a);
	printf("Introduzir novo valor para a variavel b = ");
	scanf("%f", &b);
	printf("Introduzir novo valor para a variavel c = ");
	scanf("%c", &c);
	printf("Introduzir novo valor para a variavel d = ");
	scanf("%d", &d);

	//imprimir os novos valores das variáveis
	printf("O novo valor de a = %d\n", a);
	printf("O novo valor de b = %.2f\n", b);
	printf("O novo valor de c = %c\n", c);
	printf("O novo valor de d = %d\n", d);
}