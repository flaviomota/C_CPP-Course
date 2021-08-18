#include <stdio.h>
#include <stdlib.h>

//Invocação de cabeçalhos
int		plus_ten(int nbr);
void	pointer_plus_ten(int *nbr);

//Função principal
int	main()
{
	//Definição de variáveis
	int	a;

	a = 5;

	//Imprimir o valor da variável
	printf("O valor de 'a' = %d\n", a);

	//+10
	a = plus_ten(a);
	printf("Valor de 'a' + 10 = %d\n", a);

	//+10 através de pointers
	pointer_plus_ten(&a);
	printf("O valor de 'a' = %d\n", a);

	return 0;
}

//Funções auxiliares
int	plus_ten(int nbr)
{
	return nbr + 10;
}

void	pointer_plus_ten(int *nbr)
{
	*nbr = *nbr + 10;
}
