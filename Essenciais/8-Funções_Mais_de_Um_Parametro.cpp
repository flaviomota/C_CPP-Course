#include <stdio.h>
#include <stdlib.h>

//Invocação de cabeçalhos
void	soma(int nbr1, int nbr2);

//Função principal
int	main()
{
	//Definição de variáveis
	int	a;
	int	b;

	a = 5;
	b = 7;

	//Função auxiliar que mostra a soma
	soma(a, b);

	return 0;
}

//Funções auxiliares
void	soma(int nbr1, int nbr2)
{
	int	resultado;

	resultado = nbr1 + nbr2;
	printf("A soma entre %d + %d = %d\n", nbr1, nbr2, resultado);
}
