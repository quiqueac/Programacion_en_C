// OperadoresIgualdadRelaci�n.cpp: define el punto de entrada de la aplicaci�n de consola.
// Uso de instrucciones if, operadores
// de relaci�n, y operadores de igualdad.

#include "stdafx.h"
#include <iostream>

using std::cout;	// el programa utiliza cout
using std::cin;		// el programa utiliza cin
using std::endl;	// el programa utiliza endl

// la funci�n main comienza la ejecuci�n del programa
int main()
{
	int num1;	// primer n�mero que introduce el usuario
	int num2;	// segundo n�mero que introduce el usuario

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
    return 0;	// indica que el programa termin� satisfactoriamente
}	// fin de la funci�n main