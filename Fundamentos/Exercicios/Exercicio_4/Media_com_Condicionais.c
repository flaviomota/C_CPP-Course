#include <stdio.h>
#include <stdlib.h>

/**** Criar um algoritmo que leia 3 notas e calcule a média entre elas.
 * 	  Se o valor for maior que 7, deve informar que o aluno foi aprovado,
 * 	  caso contrário foi reprovado.
****/

void	main()
{	
	//Definição de variáveis
	float	nota1;
	float	nota2;
	float	nota3;
	float	media;

	//Recolha de dados
	printf("Inserir o valor da nota 1:\n");
	scanf("%f", &nota1);
	printf("Inserir o valor da nota 2:\n");
	scanf("%f", &nota2);
	printf("Inserir o valor da nota 3:\n");
	scanf("%f", &nota3);

	//Calculo e apresentação da média
	media = (nota1 + nota2 + nota3) / 3;
	printf("O valor da media das notas = %.2f\n", media);

	//Condicional para apresentação do resultado
	if (media > 7)
	{
		printf("Aprovado\n");
	}
	else
	{
		printf("Reprovado\n");
	}
}