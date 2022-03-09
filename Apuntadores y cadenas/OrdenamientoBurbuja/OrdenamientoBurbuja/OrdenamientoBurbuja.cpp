// OrdenamientoBurbuja.cpp: define el punto de entrada de la aplicación de consola.
// Este programa coloca valores dentro de un arreglo, ordena los
// valores en orden ascendente, e imprime el arreglo resultante.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setw;

void ordenamBurbuja(int *, const int);	// prototipo
void intercambio(int * const, int * const);	// prototipo

int main()
{
	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de main

void ordenamBurbuja(int *arreglo, const int tamano)
{
	// ciclo para controlar las pasadas
	for (int pasada = 0; pasada < tamano - 1; pasada++)

		//ciclo para controlar las comparaciones durante cada pasada
		for (int k = 0; k < tamano - 1; k++)

			// intercambia elementos adyacentes, si éstos se encuentran en desorden
			if (arreglo[k] > arreglo[k + 1])
				intercambio(&arreglo[k], &arreglo[k + 1]);
}	// fin de la función ordenamBurbuja

// intercambia valores en localidades de memoria a los que
// apuntan ptrElemento1 y ptrElemento2
void intercambio(int * const ptrElemento1, int * const ptrElemento2)
{
	int mantiene = *ptrElemento1;
	*ptrElemento1 = *ptrElemento2;
	*ptrElemento2 = mantiene;
}	// fin de la función intercambio
