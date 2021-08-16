#include <stdio.h>
#include <stdlib.h>

//Função para desenhar borda inferior ou superior
void	borda()
{
	printf("|--------------------------|\n");
}

//Função principal
int	main()
{
	borda(); // -> Invocar a função para ser utilziada

	printf("Hello World!\n");
	
	borda(); // -< Invocar a função para ser utilizada

	return 0;
}