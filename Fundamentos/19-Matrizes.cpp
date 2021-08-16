#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

int	main()
{
	//Criação de uma Matriz
	int	matriz[2][2];
	int	i;
	int	j;

	//Inserir valores na Matriz~
	matriz[0][0] = 1;
	matriz[0][1] = 2;
	matriz[1][0] = 3;
	matriz[1][1] = 4;

	//Imprimir os indices da Matriz~
		//Ciclo FOR
	cout << "Imprimir os indices da Matriz com o ciclo For:" << endl;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			cout << "i = " << i << ", j = " << j << endl;
		}
	}
	cout << endl;

		//Ciclo WHILE
	printf("Imprimir os indices da Matriz com o ciclo While: \n");
	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < 2)
		{	
			printf("i = %d, j = %d\n", i, j);
			j++;
		}
		i++;
	}
	printf("\n");

	//Imprimir os valores inseridos na Matriz
		//Ciclo FOR
	cout << "Imprimir valores inserido na Matriz com o ciclo For:" << endl;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			cout << matriz[i][j] << endl;
		}
	}
	cout << endl;

		//Ciclo WHILE
	printf("Imprimir valores inseridos na Matriz com o ciclo While:\n");
	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < 2)
		{
			printf("%d\n", matriz[i][j]);
			j++;
		}
		i++;
	}
	printf("\n");

	//Inserir valores na Matriz
		//Ciclo FOR
	cout << "Inserir os valores para atribuir à Matriz:" << endl;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf("%d", &matriz[i][j]);
		}
	}
	cout << "Os valores inseridos foram:" << endl;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

		//Ciclo WHILE
	printf("Inserir os valores para atribuir à Matriz:\n");
	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < 2)
		{
			scanf("%d", &matriz[i][j]);
			j++;
		}
		i++;
	}
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



	return 0;
}