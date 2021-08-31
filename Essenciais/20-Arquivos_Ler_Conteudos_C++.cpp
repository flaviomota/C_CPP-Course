#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int	main()
{
	//Identificar o Arquivo que vai ser lido
	ifstream input("Texto.txt");

	//String que receberá o texto lido
	string	textoLido;

	//Passa o texto do Arquivo para a String
	for (string line; getline(input, line);)
	{
		textoLido += line;
	}

	//Mostrar o conteúdo
	cout << textoLido << endl;

}