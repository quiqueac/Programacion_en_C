// SumaElementosArreglo.cpp: define el punto de entrada de la aplicación de consola.
// Calcula la suma de los elemntos de un arreglo.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	const int tamanoArreglo = 10;

	int a[tamanoArreglo] = { 1,2,3,4,5,6,7,8,9,10 };

	int total = 0;

	// suma el contenido del arreglo a
	for (int i = 0; i < tamanoArreglo; i++)
		total += a[i];

	cout << "El total de los elementos del arreglo es " << total << endl;

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de main

