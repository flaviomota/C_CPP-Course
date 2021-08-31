#include <stdio.h>
#include <stdlib.h>

int	*alocaVetor(int	size)
{
	//Criação de um ponteiro auxiliar
	int	*aux;

	//Alocação dinâmica de memória
	aux = (int*)malloc(size * sizeof(int));

	//Retorno o ponteiro que aponta para a primeira posição da memória do vetor alocado
	return aux;
}

int	main()
{
	//Definição de variáveis
	int	*vetor;
	int	tamanho;
	int	i;

	//Ler o tamanho do vetor inserido pelo utilizador
	printf("Digite um tamanho pra o vetor:\n");
	scanf("%d", &tamanho);

	//Ponteiro recebe o endereço de memória que foi alocado para o vetor
	vetor = alocaVetor(tamanho);

	//Definição do vetor
	vetor[0] = 0;
	vetor[1] = 10;
	vetor[2] = 20;
	vetor[3] = 30;

	//Imprimir o vetor
	i = 0;
	while (i < tamanho)
	{
		printf("%d\n", vetor[i]);
		i++;
	}

	//Limpar a memória utilizada -> utilizado após nãos er mais necessária a utilização do vetor
	free(vetor);
}