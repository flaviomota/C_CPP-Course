#include <stdio.h>
#include <stdlib.h>

/**** Criar um algoritmo que leia dois valores e depois
*	  crie um menu (Utilziar Switch Case) de 4 opções.
*	  1-Somar	2-Subtrair	3-Dividir	4-Multiplicar
*	  Depois de o utilizador escolher uma opção, mostar
*	  o resultado da operação escolhida com os dois valores
*	  valores lidos.
****/

void	main()
{
	//Definição de variáveis
	float	valor1;
	float	valor2;
	int		op_mat;
	float	resultado;

	//Menu de seleção
	printf("Qual a operação matemática pretendida?\n");
	printf("------------------------------------------------------------------\n");
	printf("1-Somar (+)	| 2-Subtrair (-) | 3-Dividir (/) | 4-Multiplicar (*) |\n");
	printf("------------------------------------------------------------------\n");
	printf("Selecionar uma das opções:\n");
	scanf("%d", &op_mat);

	//Operações Matemáticas
	switch (op_mat)
	{
		case 1:
			printf("Introduzir o primeiro valor para a operação matemática:\n");
			scanf("%f", &valor1);
			printf("Intorduzir o segundo valor para a operação matemátcia:\n");
			scanf("%f", &valor2);
			printf("O resultado da soma = %.2f", valor1 + valor2);
			break;
		case 2:
			printf("Introduzir o primeiro valor para a operação matemática:\n");
			scanf("%f", &valor1);
			printf("Intorduzir o segundo valor para a operação matemátcia:\n");
			scanf("%f", &valor2);
			printf("O resultado da subtração = %.2f", valor1 - valor2);
			break;
		case 3:
			printf("Introduzir o primeiro valor para a operação matemática:\n");
			scanf("%f", &valor1);
			printf("Intorduzir o segundo valor para a operação matemátcia:\n");
			scanf("%f", &valor2);
			printf("O resultado da divisão = %.2f", valor1 / valor2);
			break;
		case 4:
			printf("Introduzir o primeiro valor para a operação matemática:\n");
			scanf("%f", &valor1);
			printf("Intorduzir o segundo valor para a operação matemátcia:\n");
			scanf("%f", &valor2);;
			printf("O resultado da multiplicação = %.2f\n", valor1 * valor2);
			break;
		default:
			printf("Opção Inválida! Tente novamente.\n");
			break;
	}
}