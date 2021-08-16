#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <iostream>

using namespace std;

int	main()
{
	//Definição de variáveis
	int		a;
	float	b;
	char	c;
	bool	d;

	//Atribuir valor às variáveis
	a = 10;
	b = 2.8;
	c = 'w';
	d = true;

	//Imprimir variáveis em C
	printf("Hello Wordl!\n");
	printf("Valor: %d\n", a);
	printf("Valor: %.2f\n", b);
	printf("Valor: %c\n", c);
	printf("Valor: %d\n", d);

	//Imprimir variáveis em C++
	cout << "Hello Wordl!" << endl;
	cout << "Valor: " << a << endl;
	cout << "Valor: " << b << endl;
	cout << "Valor: " << c << endl;
	cout << "Valor: " << d << endl;

	//Ler valores em C
	scanf("%d", &a);
	scanf("%f", &b);
	scanf("%c", &c);
	scanf("%d", &d);

	//Ler valores em C++
	cin >> a;
	cout << "Valor: " << a << endl;
	cin >> b;
	cout << "Valor: " << b << endl;
	cin >> c;
	cout << "Valor: " << c << endl;
	cin >> d;
	cout << "Valor: " << d << endl;

	return 0;
}