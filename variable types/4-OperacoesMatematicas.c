#include <stdio.h>
#include <stdlib.h>

void	main()
{
	//Definição de variáveis
	int	a;
	int b;
	int	x;

	a = 6;
	b = 4;

	//Soma:
	printf("A soma de %d + %d = %d\n", a, b, a + b);
		//ou
	x = a + b;
	printf("A soma de %d + %d = %d\n", a, b, x);

	//Subtração:
	printf("A subtracao de %d - %d = %d\n", a, b, a - b);
		//ou
	x = a - b;
	printf("A subtracao de %d - %d = %d\n", a, b, x);

	//Multiplicação:
	printf("A multiplicacao de %d * %d = %d\n", a, b, a * b);
		//ou
	x = a * b;
	printf("A multiplicacao de %d * %d = %d\n", a, b, x);

	//Divisão:
	printf("A divisao de %d / %d = %d\n", a, b, a / b);
		//ou
	x = a / b;
	printf("A divisao de %d / %d = %d\n", a, b, x);

	//Resto da divisão:
	printf("O resto da divisao entre %d %% %d = %d\n", a, b, a % b);
		//ou
	x = a % b;
	printf("o resto da divisao entre %d %% %d = %d\n", a, b, x);

	//Valor Absoluto (sempre positivo)
	printf("O valor absoluto de -3 = %d\n", abs(-3));
}