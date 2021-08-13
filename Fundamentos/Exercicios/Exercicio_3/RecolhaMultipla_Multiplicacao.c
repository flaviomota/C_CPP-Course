#include <stdio.h>
#include <stdlib.h>

	/*** Criar um algoritmo que leia 3 números inteiros de uma só vez e
	 * 	 que coloque o resultado da multiplicação entre os 3 numa variável
	 * 	 própria, e por fim que apresente essa variável.
	*/

void	main()
{
	//Definicação de variáveis
	int	valor1;
	int	valor2;
	int	valor3;
	int multiplicacao;

	//Atribuir valor às variáveis
	printf("Inserir 3 valores para o resultado final:\n");
	scanf("%d %d %d", &valor1, &valor2, &valor3);

	//Calculo e apresentação do resultado
	multiplicacao = valor1 * valor2 * valor3;
	printf("O valor da multiplicacao dos valores %d, %d e %d = %d\n", valor1, valor2, valor3, multiplicacao);
}