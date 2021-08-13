#include <stdio.h>
#include <stdlib.h>

/**** Criar um algoritmo que leia 3 valores e informe se eles são
 * 	  iguas entre si para formarem os lados de um triangulo equilátero.
****/

void	main()
{
	//Definição de variáveis
	float	lado1;
	float	lado2;
	float	lado3;

	//Recolha de dados
	printf("Inserir a medida do lado 1:\n");
	scanf("%f", &lado1);
	printf("Inserir a medida do lado 2:\n");
	scanf("%f", &lado2);
	printf("Inserir a medidad do lado 3:\n");
	scanf("%f", &lado3);

	//Operadores Lógicos
	if (lado1 == lado2 && lado2 == lado3 && lado3 == lado1)
	{
		printf("O triangulo é equilatero\n");
	}
	else
	{
		//Analisa se existe pelo menos dois lado iguiais
		if (lado1 == lado2 || lado2 == lado3 || lado3 == lado1)
		{
			printf("O trinagulo é isósceles\n");
		}
		//Os lados são todos diferentes
		else
		{
			printf("O triangulo é escaleno\n");
		}
	}
}