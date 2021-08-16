#include <stdio.h>
#include <stdlib.h>

void	main()
{
	//Definição de variáveis
	char	palavra[255];

	//Instrução ao utilizador
	printf("Digite uma palavra:\n");

	//Limpar o BUFFER
	setbuf(stdin, 0);

	//Ler a String
	fgets(palavra, 255, stdin);

	//Limpar o espaço em excesso de um String
	palavra[strlen(palavra)-1] = '\0';

	//Apresentar a String
	printf("%s", palavra);

	return ;
}