#include <stdio.h>
#include <string.h>
#include <fstream>

using namespace std;

int	main()
{
	//Criar o objeto do arquivo
	ofstream meuArquivo;

	//Abre o Arquivo
	meuArquivo.open("Texto.txt");

	//Escaviza o Arquivo
	meuArquivo << "";

	//Fechar o Arquivo
	meuArquivo.close();
}