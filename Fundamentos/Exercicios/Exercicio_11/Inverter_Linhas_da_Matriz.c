#include <stdio.h>
#include <stdlib.h>

/****
 * Preencher uma matrix 2x2 com os valores inseridos pelo
 * utilizador e depois trocar os valores entre a primeira
 * e a segunda linha.
****/

void	main()
{
	//Definição da matriz e variáveis
	int	matriz[2][2];
	int	i;
	int j;
	int	swap;
	int	swap2;

	//Ciclo para recolha de dados do utilizador
	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < 2)
		{
			printf("Inserir o valor da Matriz para [%d][%d]:\n", i, j);
			scanf("%d", &matriz[i][j]);
			j++;
		}
		i++;
	}
	printf("\n");

	//Imprimir os valores da matriz pela ordem de inserção
	printf("Os valores inseridos foram:\n");
	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < 2)
		{
			printf("%d ", matriz[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	printf("\n");
	
	//Trocar na apresentação a lina 1 com a linha 2
		//Com duas variáveis auxiliares
	printf("Imprimir pela ordem inversa:\n");
	//Trocar dos valores da coluna 1
	swap = matriz[0][0];
	matriz[0][0] = matriz[1][0];
	matriz[1][0] = swap;
	//Trocar dos valores da coluna 2
	swap2 = matriz[0][1];
	matriz[0][1] = matriz[1][1];
	matriz[1][1] = swap2;
	
	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < 2)
		{
			printf("%d ", matriz[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}