// OrdenamientoBurbuja.cpp: define el punto de entrada de la aplicación de consola.
// Este programa ordena los valores de un arreglo en orden ascendente.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setw;

int main()
{
	const int tamanoArreglo = 10;	// tamaño del arreglo a
	int a[tamanoArreglo] = { 2,6,4,8,10,12,89,68,45,37 };
	int mantiene;	// ubicación temporal utilizada para intercambiar los elementos del arreglo

	cout << "Elementos de datos en el orden original\n";

	// despliega el arreglo original
	for (int i = 0; i < tamanoArreglo; i++)
		cout << setw(4) << a[i];

	// ordenamiento burbuja
	// ciclo para controlar el número de pasadas
	for (int pasada = 0; pasada < tamanoArreglo - 1; pasada++)
	{
		// ciclo para controlar el número de comparaciones por pasada
		for (int j = 0; j < tamanoArreglo - 1; j++)
		{
			// compara los elementos contiguos y los intercambia si
			// el primer elemento es mayor que el segundo
			if (a[j] > a[j + 1])
			{
				mantiene = a[j];
				a[j] = a[j + 1];
				a[j + 1] = mantiene;
			}	// fin de if
		}
	}

	cout << "\nElementos de datos en orden ascendente\n";

	// muestra el arreglo ordenado
	for (int k = 0; k < tamanoArreglo; k++)
		cout << setw(4) << a[k];

	cout << endl;

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de main

