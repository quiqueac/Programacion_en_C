// OperadoresIgualdadRelación.cpp: define el punto de entrada de la aplicación de consola.
// Uso de instrucciones if, operadores
// de relación, y operadores de igualdad.

#include "stdafx.h"
#include <iostream>

using std::cout;	// el programa utiliza cout
using std::cin;		// el programa utiliza cin
using std::endl;	// el programa utiliza endl

// la función main comienza la ejecución del programa
int main()
{
	int num1;	// primer número que introduce el usuario
	int num2;	// segundo número que introduce el usuario

	cout << "Digite dos enteros, y le dire\n"
		<< "las relaciones que satisface: ";
	cin >> num1 >> num2;	// lee dos entero

	if (num1 == num2)
		cout << num1 << " es igual que " << num2 << endl;

	if (num1 != num2)
		cout << num1 << " no es igual que " << num2 << endl;

	if (num1 < num2)
		cout << num1 << " es menor que " << num2 << endl;

	if (num1 > num2)
		cout << num1 << " es mayor que " << num2 << endl;

	if (num1 <= num2)
	{
		cout << num1 << " es menor o igual que "
			<< num2 << endl;
	}

	if (num1 >= num2)
	{
		cout << num1 << " es mayor o igual que "
			<< num2 << endl;
	}

	system("pause");
    return 0;	// indica que el programa terminó satisfactoriamente
}	// fin de la función main