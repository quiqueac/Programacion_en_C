// PasoPorReferencia.cpp: define el punto de entrada de la aplicación de consola.
// Cubo de una variable mediante el paso por referencia
// con un apuntador como argumento.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

void cuboPorReferencia(int *);	// prototipo

int main()
{
	int numero = 5;

	cout << "El valor original de numero es " << numero;

	// pasa la dirección de numero a cuboPorReferencia
	cuboPorReferencia(&numero);

	cout << "\nEl nuevo valor de numero es " << numero << endl;

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de main

// calcula el cubo de *ptrN; modifica la variable numero dentro de main
void cuboPorReferencia(int *ptrN)
{
	*ptrN = *ptrN * *ptrN * *ptrN;	// cubo de *ptrN
}	// fin de la función cuboPorReferencia

