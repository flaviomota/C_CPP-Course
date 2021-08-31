#include <stdio.h>

typedef struct	Data
{
	int	dia;
	int	mes;
	int	ano;
}	Data;

struct aluno
{
	int	id;
	Data nascimento;
};


int	main()
{
	//Criando alunos
	struct aluno	aluno1;

	//Modificar valores
	aluno1.id = 15;
	aluno1.nascimento.ano = 1989;
	aluno1.nascimento.mes = 4;
	aluno1.nascimento.dia = 15;

	//Imprimir os valores
	printf("Nascido em: %d/%d/%d\n", aluno1.nascimento.dia, aluno1.nascimento.mes, aluno1.nascimento.ano);
}