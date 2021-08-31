#include <stdio.h>
#include <string.h>
#include <fstream>

using namespace std;

int	main()
{
	//Criar o obejto de arquivo
	ofstream outfile;

	//Abrir o arquivo ou criar em caso de não existir
	outfile.open("Texto.txt", std::ios_base::app);

	//Escrever alguma coisa dentro do arquivo
	outfile << "Hello World" << endl;

	//Fechar o arquivo
	outfile.close();
}