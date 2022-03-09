// InicializacionElementosArreglo.cpp: define el punto de entrada de la aplicaci�n de consola.
// Inicializaci�n de un arreglo con una declaraci�n.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setw;

int main()
{
	// utiliza una lista de inicializaci�n para inicializar el arreglo a
	int n[10] = { 32,27,64,18,95,14,90,70,60,37 };

	cout << "Elemento" << setw(13) << "Valor" << endl;

	// salida del contenido del arreglo n en formato tabular
	for (int i = 0; i < 10; i++)
		cout << setw(7) << i << setw(13) << n[i] << endl;

	system("pause");
    return 0;	// indica terminaci�n exitosa
}	// fin de main

