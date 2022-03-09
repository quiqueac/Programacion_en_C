// GeneracionDeValoresConFor.cpp: define el punto de entrada de la aplicaci�n de consola.
// Inicializa el arreglo s con los enteros pares de 2 a 20.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setw;

int main()
{
	// la variable constante se puede utilizar para especificar el tama�o del arreglo
	const int tamanoArreglo = 10;

	int s[tamanoArreglo];	// el arreglo s tiene 10 elementos

	for (int i = 0; i < tamanoArreglo; i++)	// establece los valores
		s[i] = 2 + 2 * i;

	cout << "Elemento" << setw(13) << "Valor" << endl;

	// muestra el contenido del arreglo s en formato tabular
	for (int j = 0; j < tamanoArreglo; j++)
		cout << setw(7) << j << setw(13) << s[j] << endl;

	system("pause");
    return 0;	// indica terminaci�n exitosa
}	// fin de main

