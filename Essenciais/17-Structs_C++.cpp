#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <new>

using namespace	std;

//Struct para frutas
struct	fruta{
	string	cor;
	string	nome;
};

int	main()
{
	//Criação de um ponteiro para o struct criado
	fruta *fruta1 = new fruta;

	//Modificar valores
	fruta1->cor = "Amarelo";
	fruta1->nome = "Banana";

	//Exibir valores
	cout << "Fruta: " << fruta1->nome << ", Cor: " << fruta1->cor << endl;

	//Criar uma lista de frutas
	fruta *ponteiroListaDeFrutas = new fruta[2];

	//Modificar valores
	ponteiroListaDeFrutas[0].cor = "Vermelho";
	ponteiroListaDeFrutas[1].cor = "Verde";
	ponteiroListaDeFrutas[0].nome = "Morango";
	ponteiroListaDeFrutas[1].nome = "Kiwi";

	//Percorrer e imprimir os valores da lista criada
	int i;

	i = 0;
	while (i < 2)
	{
		cout << "Fruta: " << ponteiroListaDeFrutas[i].nome << ", Cor: " << ponteiroListaDeFrutas[i].cor << endl;
		i++;
	}
}