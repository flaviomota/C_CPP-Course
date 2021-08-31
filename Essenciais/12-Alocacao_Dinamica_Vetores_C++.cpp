#include <stdlib.h>
#include <stdio.h>
#include <new>

int	main()
{
	//Definição de variáveis
	int	tamanho;
	int	i;

	//Ler o tamanho inserido pelo utilizador
	printf("Digite um tamanho:\n");
	scanf("%d", &tamanho);

	//Criação de um ponteiro que recebe o novo vetor vazio
	int	*vetor = new int(tamanho);

	//Modificar e imprimir os valores do vetor
	i = 0;
	while (i < tamanho)
	{
		vetor[i] = i;
		printf("%d\n", vetor[i]);
		i++;
	}

	//Limpar a memória utilizada -> utilizado após nãos er mais necessária a utilização do vetor
	free(vetor);
}