// InicializaciónCerosElementosArreglo.cpp: define el punto de entrada de la aplicación de consola.
// Inicialización de un arreglo.

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
		n[i] = 0;	// establece el elemento de la unicación i en 0

	cout << "Elemento" << setw(13) << "Valor" << endl;

	// desplega el contenido de un arreglo n en formato tabular
	for (int j = 0; j < 10; j++)
		cout << setw(7) << j << setw(13) << n[j] << endl;

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de main

