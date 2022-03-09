// OrdenamientoBurbujaMultipro.cpp: define el punto de entrada de la aplicación de consola.
// Programa de ordenamiento burbuja multipropósito, mediante el uso
// de apuntadores a funciones.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <iomanip>

using std::setw;

// prototipos
void burbuja(int[], const int, bool(*)(int, int));
void intercambia(int * const, int * const);
bool ascendente(int, int);
bool descendente(int, int);

int main()
{
	const int tamanoArreglo = 10;
	int orden;
	int contador;
	int a[tamanoArreglo]{ 2,6,4,8,10,12,89,68,45,37 };

	cout << "Introduzca 1 para ordenar de manera ascendente,\n"
		<< "Introduzca 2 para ordenar de manera descendente: ";

	cin >> orden;

	cout << "\nElementos de datos en el orden original\n";

	// muestrael arreglo original
	for (contador = 0; contador < tamanoArreglo; contador++)
		cout << setw(4) << a[contador];

	// ordena el arreglo en orden ascendente; pasa a la función ascendente
	// como un argumento para especificar el orden ascendente
	if (orden == 1)
	{
		burbuja(a, tamanoArreglo, ascendente);
		cout << "\nElementos de datos en orden ascendente\n";
	}

	// ordena el arreglo en orden descendente; pasa a la función descendente
	// como un argumento para especificar el orden descendente
	else
	{
		burbuja(a, tamanoArreglo, descendente);
		cout << "\nElementos de datos en orden descendente\n";
	}

	// muestra arreglo ordenado
	for (contador = 0; contador < tamanoArreglo; contador++)
		cout << setw(4) << a[contador];

	cout << endl;

	system("pause");
	return 0;	// indica terminación exitosa
}	// fin de main

	// ordenamiento burbuja multipropósito; el parámetro compara es un apuntador a
	// la función de comparación que determina el tipo de ordenamiento
void burbuja(int trabajo[], const int tamano, bool(*compara)(int, int))
{
	// ciclo para controlar las pasadas
	for (int pasada = 1; pasada < tamano; pasada++)

		// ciclo para controlar el número de comparaciones por pasada
		for (int cuenta = 0; cuenta < tamano - 1; cuenta++)

			// si los elementos adyacentes se encuentran en desorden, los intercambia
			if ((*compara)(trabajo[cuenta], trabajo[cuenta + 1]))
				intercambia(&trabajo[cuenta], &trabajo[cuenta + 1]);
}	// fin de la función burbuja

	// intercambia valoresen localidades de memoria a los cuales
	// apuntan ptrElemento1 y ptrElemento2
void intercambia(int * const ptrElemento1, int * const ptrElemento2)
{
	int mantiene = *ptrElemento1;
	*ptrElemento1 = *ptrElemento2;
	*ptrElemento2 = mantiene;
}	// fin de la función intercambia

	// determina si los elementos están en desorden
	// para un ordenamiento ascendente
bool ascendente(int a, int b)
{
	return b < a;	// intercambia si b es menor que a
}	// fin de la función ascendente

	// determina si los elementos están en desorden
	// para un ordenamiento descendente
bool descendente(int a, int b)
{
	return b > a;	// intercambia si b es mayor que a
}	// fin de la función descendente

