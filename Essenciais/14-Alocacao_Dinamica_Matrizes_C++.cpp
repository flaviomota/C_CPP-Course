#include <stdio.h>
#include <stdlib.h>
#include <new>

int	main()
{
	//Definição de variáveis
	int	linha;
	int	coluna;
	int	**matriz;
	int	i;
	int j;

	linha = 3;
	coluna = 3;

	//Ler o tamanho inserido pelo utilizador
	printf("Digite o número de linhas:\n");
	scanf("%d", &linha);
	printf("Digite o número de colunas:\n");
	scanf("%d", &coluna);

	//Alicação das linhas
	matriz = (int**)new int[linha];

	//Alocação da memória para as colunas de cada linha
	i = 0;
	while (i < linha)
	{
		matriz[i] = (int *)new int[coluna];
		i++;
	}

	//Preencher a matriz e exibir os seus valores
	i = 0;
	while (i < linha)
	{
		j = 0;
		while ( j < coluna)
		{
			matriz[i][j] = i;
			printf("%d ", matriz[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}

	//Limpar a memória utilizada -> utilizado após nãos er mais necessária a utilização da matriz
	free(matriz);
}