#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int	main()
{
	//Criar um curosr que irá percorrer cada letra
	int		cursor;
	char	conteudoTexto[255];
	int		i;

	//Arquivo a ser lido
	FILE *file;

	//Abre o aqruivo no diretório escolhido
	file = fopen("Texto.txt", "r");

	//Verifica se o arquivo foi encontrado
	if (file) //arquivo existe
	{
		i = 0;
		while ((cursor = getc(file)) != EOF) //Encontra letras até ao fim do aquivo
		{
			//Imprime
			printf("%c", cursor);
			conteudoTexto[i] = cursor; //O vetor Char, recebe a letra atual
			i++; //Aumenta a contagem de letras
		}
		fclose(file); //Fechar o arquivo
	}

	//Imprimir o conteúdo lido
	i = 0;
	while (i < strlen(conteudoTexto) - 1)
	{
		printf("%c", conteudoTexto[i]);
		i++;
	}
}