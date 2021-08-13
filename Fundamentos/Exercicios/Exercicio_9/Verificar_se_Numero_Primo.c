#include <stdio.h>
#include <stdlib.h>

/****
 * Criar um algoritmo que informe se o valor lido é primo ou não
****/

void	main()
{
	//Definição de variáveis
	int	i;
	int	valor;
	int	prime;

	prime = 0;
	//Ler o valor introduzido
	printf("Introduzir um valor:\n");
	scanf("%d", &valor);

	//Ciclo WHILE
	//Ciclo FOR
	for (i = 1; i <= valor; i++)
	{	
		//Método para conferir quantas vezes houve divisibilidade
		if (valor % i == 0)
		{
			prime++;
		}
		//Imprime o resto da divisão
		printf("%d / %d tem o resto = %d\n",valor, i, valor % i);
	}
	if (prime == 2)
	{
		printf("O número é primo\n");
	}
	else
	{
		printf("O número não é primo, pois ele tem %d divisores\n", prime);
	}
}
