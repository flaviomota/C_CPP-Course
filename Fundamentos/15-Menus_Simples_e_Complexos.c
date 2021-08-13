#include <stdio.h>
#include <stdlib.h>

void	main()
{
	//Defienir variáveis
	int	opcao;

	//Menu Simples
	/*
	//interface do Menu
	printf("Escolha uma opção:\n");
	printf("1-Opção 1\n");
	printf("2-Opção 2\n");
	printf("3-Opção 3\n");

	//Ler o valor da opcao
	scanf("%d", &opcao);
	switch (opcao)
	{
		case 1:
			printf("A opção 1 foi escolhida\n");
			break;
		case 2:
			printf("A opção 2 foi escolhida\n");
			break;
		case 3:
			printf("A opção 3 foi escolhida\n");
			break;
		default:
			printf("Opção Invávlida!\n");
			break;
	}
	*/

	//Menu Complexo
	while (opcao < 1 || opcao >3)
	{	
		//interface do Menu
		printf("Escolha uma opção:\n");
		printf("1-Opção 1\n");
		printf("2-Opção 2\n");
		printf("3-Opção 3\n");

		//Ler o valor da opcao
		scanf("%d", &opcao);
			switch (opcao)
			{
				case 1:
					printf("A opção 1 foi escolhida\n");
					break;
				case 2:
					printf("A opção 2 foi escolhida\n");
					break;
				case 3:
					printf("A opção 3 foi escolhida\n");
					break;
				default:
					printf("Opção Inválida!\n");
					break;
			}
	}
}