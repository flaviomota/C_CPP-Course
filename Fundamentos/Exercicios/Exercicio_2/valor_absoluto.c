#include <stdio.h>
#include <stdlib.h>

//Criar um algoritmo que leia 2 notas e mostre o valor absoluto da diferença entre elas
void	main()
{
	//Definição de variáveis
	int	nota1;
	int	nota2;
	int	diff;

	//Ler o primeiro valor
	printf("Inseir o valor da nota1:\n");
	scanf("%d", &nota1);

	//Ler o segundo valor
	printf("Inserir o valor da nota2:\n");
	scanf("%d", &nota2);

	//Calculo e apresentação do resultado
	diff = nota1 - nota2;
	printf("O valor da diferença entre a nota1 (%d) e a nota2 (%d) = %d\n", nota1, nota2, diff);
	printf("O valor absoluto da diferenca entre a nota1 (%d) e a nota2(%d) = %d\n", nota1, nota2, abs(diff));
}