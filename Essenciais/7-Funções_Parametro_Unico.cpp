#include <stdio.h>
#include <stdlib.h>

//Invocação de cabeçalhos
void	nbr_seguinte(int nbr);
void	nbr_anterior(int nbr);

//Função principal
int	main()
{
	//Definição de variáveis
	int	a;

	//Atribuir valor à variável
	printf("Inserir valor na variável:\n");
	scanf("%d", &a);

	nbr_seguinte(a);
	nbr_anterior(a);

	return 0;
}

//Funções auxiliares
void	nbr_seguinte(int nbr)
{
	printf("O número seguinte a %d é = %d\n", nbr, nbr + 1);
}

void	nbr_anterior(int nbr)
{
	printf("O número anterior a %d é = %d\n", nbr, nbr - 1);
}