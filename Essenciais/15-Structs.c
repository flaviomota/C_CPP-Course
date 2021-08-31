#include <stdio.h>
#include <string.h>

struct palavra
{
	int		ordem;
	char	letra;
	char	texto[255];
};


int	main()
{
	//Criação de uma palavra
	struct palavra	primeiraPalavra;

	//Modificar os campos da Struct
	primeiraPalavra.ordem = 0;
	primeiraPalavra.letra = 'c';
	strcpy(primeiraPalavra.texto, "String");

	//Mostrar valores da Struct
	printf("Ordem: %d\n", primeiraPalavra.ordem);
	printf("Primeira Letra: %c\n", primeiraPalavra.letra);
	printf("Texto: %s\n", primeiraPalavra.texto);

	//Criação de uma lista de Structs
	struct palavra	listaDePalavras[3];

	//Modificar valores de uma lista de Structs
	listaDePalavras[0].ordem = 0;
	listaDePalavras[1].ordem = 1;
	listaDePalavras[2].ordem = 2;
	listaDePalavras[0].letra = 'd';
	listaDePalavras[1].letra = 'l';
	listaDePalavras[2].letra = 'b';
	strcpy(listaDePalavras[0].texto, "Primeiro");
	strcpy(listaDePalavras[1].texto, "Segundo");
	strcpy(listaDePalavras[2].texto, "Terceiro");

	//Percorrer e imprimir o vetor
	int	i;

	i = 0;
	while (i < 3)
	{
		printf("Ordem: %d\n", listaDePalavras[i].ordem);
		printf("Primeira Letra: %c\n", listaDePalavras[i].letra);
		printf("Texto: %s\n", listaDePalavras[i].texto);
		i++;
	}
}