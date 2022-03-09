// PlantillasDeFuncion.cpp: define el punto de entrada de la aplicación de consola.
// Uso de una plantilla de función.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// definición de la plantilla de función maximo
template <class T> // o template <nombretipo T>
T maximo(T valor1, T valor2, T valor3)
{
	T max = valor1;

	if (valor2 > max)
		max = valor2;

	if (valor3 > max)
		max = valor3;

	return max;
}	// fin de la plantilla de función maximo

int main()
{
	// demostración de maximo con valores enteros
	int entero1, entero2, entero3;

	cout << "Introduzca tres valores enteros: ";
	cin >> entero1 >> entero2 >> entero3;

	// invoca a la versión int de maximo
	cout << "El mayor valor entero es: " << maximo(entero1, entero2, entero3);

	// demostración de maximo con valores double
	double doble1, doble2, doble3;

	cout << "\n\nIntroduzca tres valores double: ";
	cin >> doble1 >> doble2 >> doble3;

	// invoca a la versión double de maximo
	cout << "El mayor valor double es: " << maximo(doble1, doble2, doble3);

	// demostración de maximo con valores char
	char car1, car2, car3;

	cout << "\n\nIntroduzca tres caracteres: ";
	cin >> car1 >> car2 >> car3;

	// invoca a la versión char de maximo
	cout << "El valor caracter mayor es: " << maximo(car1, car2, car3) << endl;

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de main

