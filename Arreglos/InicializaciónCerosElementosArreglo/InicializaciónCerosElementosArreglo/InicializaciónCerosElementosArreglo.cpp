// Inicializaci�nCerosElementosArreglo.cpp: define el punto de entrada de la aplicaci�n de consola.
// Inicializaci�n de un arreglo.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setw;

int main()
{
	int n[10];	// n es un arreglo de 10 enteros

	// inicializa los elementos del arreglo n en 0
	for (int i = 0; i < 10; i++)
		n[i] = 0;	// establece el elemento de la unicaci�n i en 0

	cout << "Elemento" << setw(13) << "Valor" << endl;

	// desplega el contenido de un arreglo n en formato tabular
	for (int j = 0; j < 10; j++)
		cout << setw(7) << j << setw(13) << n[j] << endl;

	system("pause");
    return 0;	// indica terminaci�n exitosa
}	// fin de main

