#include <stdio.h>
#include <stdlib.h>

//Criar um algoritmo que leia 2 notas e mostre a média entre elas.
void	main()
{
	//Definição de variáveis
	float	nota1;
	float	nota2;
	float	media;

	//Ler o primeiro valor
	printf("Inserir o valor da nota1:\n");
	scanf("%f", &nota1);

	//Ler o segundo valor
	printf("Inserir o valor da nota2:\n");
	scanf("%f", &nota2);
	
	//Calculo e apresentação do resultado
	media = (nota1 + nota2) / 2;
	printf("O valor médio da nota1 (%.2f) e da nota2 (%.2f) = %.2f\n", nota1, nota2, media);
}