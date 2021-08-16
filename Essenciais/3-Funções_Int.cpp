#include <stdio.h>
#include <stdlib.h>

//Invocar os cabeçalhos de funções a serem utilizadas
int	devolve10();
float	decimal();

//Função principal
int	main()
{
	//Definição de variáveis
	int		a;
	float	b;

	//Atribuir o retorno de uma função a uma variável
	a = devolve10();
	b = decimal();

	//Imprimir
	printf("Imprimindo o valor da variável a: %d\n", a);
	printf("Imprimindo o retorno da função decimal:\n%f\n", b);

	return 0;
}

//Função que retorno 10
int	devolve10()
{	
	printf("Imprimindo o valor através do recurso a uma função auxiliar!\n");
	return 10;
}

//Função que retorna um número decimal
float	decimal()
{
	printf("Atribuir funções que retornem números decimais\n");
	return 5.5;
}