#include <stdio.h>
#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#define TAM 10

using namespace std; //para utilizar cout

void	imprime_vetor(int vetor[TAM]);
int		pesquisa_simples(int vetor[TAM], int valorProcurado, int *posicaoEncontrada);
int		pesquisa_binaria(int vetor[TAM], int valorProcurado, int *posicaoEncontrada);

int 	main()
{
    int vetor[TAM] = {1,23,44,56,63,72,84,90,98};
    int valorProcurado;
    int posicao, posicaoEncontrada;

    //Auxiliar contador
    int cont;

	//Função que imprime o vetor
    imprime_vetor(vetor);

	//Ler o número que o utiulizador pretende procurar
    printf("Qual numero deseja encontrar?");
    scanf("%d", &valorProcurado);

    if(pesquisa_binaria(vetor, valorProcurado, &posicaoEncontrada) == 1)
	{
        cout << "O valor foi encontrado na posicao: " << posicaoEncontrada << endl;
    }
	else
	{
        cout << "O valor nao foi encontrado!" << endl;
    }

    return 0;
}

void	imprime_vetor(int vetor[TAM])
{
    //Auxiliar contador
    int	cont;

     //Imprime o vetor
    for(cont = 0; cont < TAM; cont++)
	{
        cout << vetor[cont] << " - ";
    }
}

int pesquisa_simples(int vetor[TAM], int valorProcurado, int *posicaoEncontrada)
{
    //Auxiliar contador
    int		cont;

    //Verifica se o valor foi encontrado
    bool	valorFoiEncontrado;

    //Percorre o vetor à procura do valor
    for(cont = 0; cont < TAM; cont++)
	{
        if(vetor[cont] == valorProcurado)
		{
            valorFoiEncontrado = true;
            *posicaoEncontrada = cont;
        }
    }

    if(valorFoiEncontrado)
	{
        return 1;
    }
	else
	{
        return -1;
    }
}

int		pesquisa_binaria(int vetor[TAM], int valorProcurado, int *posicaoEncontrada)
{
	int	limiteEsquerda;
	int	limiteDireita;
	int	meio;

	limiteEsquerda = 0;
	limiteDireita = TAM - 1;

	while (limiteEsquerda <= limiteDireita)
	{
		meio = (limiteEsquerda + limiteDireita) / 2;

		//Quando o valor do meio é encontrado
		if (valorProcurado == vetor[meio])
		{
			*posicaoEncontrada = meio;
			return 1;
		}

		//Ajustar os limites laterais
		if (vetor[meio] < valorProcurado)
		{
			limiteEsquerda = meio + 1;
		}
		else
		{
			limiteDireita = meio - 1;
		}
	}
	return -1;
}
