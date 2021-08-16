#include <stdio.h>
#include <stdlib.h>

//Funçaõ para limpar o ecran
void	limpa()
{
	system("CLS");
}

//Função principal
int	main()
{
	//Definição de variáveis
	int	a;

	//Imprimindo
	printf("Inserir um valor para a variável a:\n");

	//Ler o valor inserido pelo utilizador
	scanf("%d", &a);

	limpa();

	printf("O valor inserido foi %d\n", a);
	printf("--- FIM DO PROGRAMA ---");

	return 0;
}