#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void	main()
{
	//Responsável por alimentar a função rand de forma diferente sempre que utilizada
	srand((unsigned)time(NULL));

	//Variável que recebe o resto da divisão do número gerado por 3 (número entre 0 e 2)
	int	random;

	random = rand() % 3;

	//Variável que recebe o resto da divisão do número gerado por 5 (número entre 1 e 5)
	int	random2;

	random2 = (rand() % 5) + 1;

	//Apresenta o valor gerado de forma aleatória
	printf("%d", random2);
	random2 = (rand() % 5) + 1;
	printf("%d", random2);
}