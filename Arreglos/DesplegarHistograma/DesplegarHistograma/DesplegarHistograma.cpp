// DesplegarHistograma.cpp: define el punto de entrada de la aplicación de consola.
// Programa para desplegar un histograma.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setw;

int main()
{
	const int tamanoArreglo = 10;

	int n[tamanoArreglo] = { 19,3,15,7,11,9,13,5,17,1 };

	cout << "Elemento" << setw(13) << "Valor" << setw(17) << "Histograma" << endl;

	// para cada elemento del arreglo n, muestra una barra en el histograma
	for (int i = 0; i < tamanoArreglo; i++)
	{
		cout << setw(7) << i << setw(13) << n[i] << setw(9);

		for (int j = 0; j < n[i]; j++)	// despliega una barra
			cout << '*';

		cout << endl;	// inicia la siguiente línea de salida
	}

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de main

